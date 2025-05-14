#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    int r, c, dist;
    Node(int row, int col, int distance) : r(row), c(col), dist(distance) {}

    bool operator>(const Node& other) const {
        return dist > other.dist;
    }
};

vector<int> shortestPath(vector<vector<int>> a, vector<vector<int>> queries) {
    int n = a.size();
    int m = a[0].size();
    vector<int> results;

    vector<int> dr = { -1, 0, 1, 0 };
    vector<int> dc = { 0, 1, 0, -1 };

    for (const auto& query : queries) {
        int r1 = query[0], c1 = query[1];
        int r2 = query[2], c2 = query[3];

        vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
        dist[r1][c1] = a[r1][c1];

        priority_queue<Node, vector<Node>, greater<Node>> pq;
        pq.push(Node(r1, c1, a[r1][c1]));

        while (!pq.empty()) {
            Node current = pq.top();
            pq.pop();

            int r = current.r;
            int c = current.c;
            int d = current.dist;

            if (d > dist[r][c]) continue;

            if (r == r2 && c == c2) break;

            for (int i = 0; i < 4; i++) {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr >= 0 && nr < n && nc >= 0 && nc < m) {
                    int new_dist = d + a[nr][nc];

                    if (new_dist < dist[nr][nc]) {
                        dist[nr][nc] = new_dist;
                        pq.push(Node(nr, nc, new_dist));
                    }
                }
            }
        }

        results.push_back(dist[r2][c2]);
    }

    return results;
}
