
#include <iostream>
#include <vector>
using namespace std;

const int MAX_NODES = 100005;
vector<int> graph[MAX_NODES];
bool visited[MAX_NODES];

int dfs(int node) {
    visited[node] = true;
    int size = 1;

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            size += dfs(neighbor);
        }
    }
    return size;
}
vector<int> componentsInGraph(vector<vector<int>> gb) {
    int n = 0;
    vector<int> sizes;

    for (auto& edge : gb) {
        int u = edge[0], v = edge[1];
        graph[u].push_back(v);
        graph[v].push_back(u);
        n = max(n, max(u, v));
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i] && !graph[i].empty()) {
            int size = dfs(i);
            if (size > 1) sizes.push_back(size);
        }
    }

    return { *min_element(sizes.begin(), sizes.end()), *max_element(sizes.begin(), sizes.end()) };

}
