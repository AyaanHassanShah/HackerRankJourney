
#include <iostream>
#include <vector>

using namespace std;
void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited, int& size) {
    visited[node] = true;
    size++;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited, size);
        }
    }
}

long roadsAndLibraries(int n, int c_lib, int c_road, vector<vector<int>> cities) {
    if (c_lib <= c_road) return (long)n * c_lib;

    vector<vector<int>> adj(n + 1);
    for (auto& edge : cities) {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    vector<bool> visited(n + 1, false);
    long totalCost = 0;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            int componentSize = 0;
            dfs(i, adj, visited, componentSize);
            totalCost += c_lib + (componentSize - 1) * c_road;
        }
    }

    return totalCost;
}