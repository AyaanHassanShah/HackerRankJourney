
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> adj_list(numCourses);
    vector<int> in_degree(numCourses, 0);

    // Build graph
    for (auto& pre : prerequisites) {
        adj_list[pre[1]].push_back(pre[0]);
        in_degree[pre[0]]++;
    }

    queue<int> q;
    for (int i = 0; i < numCourses; i++) {
        if (in_degree[i] == 0) q.push(i);
    }

    int taken_courses = 0;
    while (!q.empty()) {
        int course = q.front();
        q.pop();
        taken_courses++;

        for (int neighbor : adj_list[course]) {
            in_degree[neighbor]--;
            if (in_degree[neighbor] == 0) q.push(neighbor);
        }
    }

    return taken_courses == numCourses;
}