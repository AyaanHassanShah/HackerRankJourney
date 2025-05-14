#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

const vector<pair<int, int>> moves = { {-2, -1}, {-2, 1}, {0, 2}, {2, 1}, {2, -1}, {0, -2} };
const vector<string> moveNames = { "UL", "UR", "R", "LR", "LL", "L" };

struct Node {
    int x, y, dist;
    vector<string> path;
};

void printShortestPath(int n, int startX, int startY, int endX, int endY) {
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    queue<Node> q;

    q.push({ startX, startY, 0, {} });
    visited[startX][startY] = true;

    while (!q.empty()) {
        Node current = q.front();
        q.pop();

        if (current.x == endX && current.y == endY) {
            cout << current.dist << endl;
            for (const string& step : current.path) {
                cout << step << " ";
            }
            cout << endl;
            return;
        }

        for (int i = 0; i < moves.size(); ++i) {
            int newX = current.x + moves[i].first;
            int newY = current.y + moves[i].second;

            if (newX >= 0 && newX < n && newY >= 0 && newY < n && !visited[newX][newY]) {
                visited[newX][newY] = true;
                vector<string> newPath = current.path;
                newPath.push_back(moveNames[i]);
                q.push({ newX, newY, current.dist + 1, newPath });
            }
        }
    }

    cout << "Impossible" << endl;
}

int main() {
    int n, startX, startY, endX, endY;
    cin >> n >> startX >> startY >> endX >> endY;
    printShortestPath(n, startX, startY, endX, endY);
    return 0;
}
