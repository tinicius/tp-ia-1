#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <chrono>

using namespace std;
using namespace std::chrono;

vector<pair<int, int>> adj[5][5];
bool vis[5][5];

void bfs(pair<int, int> start) {
    queue<pair<int, int>> q;
    q.push(start);
    vis[start.first][start.second] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (auto [u, v] : adj[x][y]) {
            if (!vis[u][v]) {
                vis[u][v] = true;
                q.push({u, v});
            }
        }
    }
}

void dfs(pair<int, int> start) {
    stack<pair<int, int>> s;
    s.push(start);

    while (!s.empty()) {
        auto [x, y] = s.top();
        s.pop();

        if (!vis[x][y]) {
            vis[x][y] = true;

            for (auto [u, v] : adj[x][y]) {
                if (!vis[u][v]) {
                    s.push({u, v});
                }
            }
        }
    }
}

int main() {
    adj[0][0] = {{0, 1}, {1, 0}}; // A
    adj[0][1] = {{0, 0}}; // B
    adj[0][2] = {{0, 3}, {1, 2}}; // C
    adj[0][3] = {{0, 2}, {0, 4}}; // D
    adj[0][4] = {{0, 3}, {1, 4}}; // E

    adj[1][0] = {{0, 0}, {1, 1}}; // F
    adj[1][1] = {{1, 0}, {1, 2}}; // G
    adj[1][2] = {{0, 2}, {1, 1}, {1, 3}}; // H
    adj[1][3] = {{1, 2}, {2, 3}}; // I
    adj[1][4] = {{0, 4}}; // J

    adj[2][0] = {{3, 0}}; // K
    adj[2][1] = {{2, 2}, {3, 1}}; // L
    adj[2][2] = {{0, 4}, {2, 1}, {2, 3}}; // M
    adj[2][3] = {{2, 4}, {2, 2}, {1, 3}}; // N
    adj[2][4] = {{2, 3}}; // O

    adj[3][0] = {{2, 0}, {4, 0}}; // P
    adj[3][1] = {{2, 1}, {4, 1}}; // Q
    adj[3][2] = {{2, 2}, {3, 3}}; // R
    adj[3][3] = {{3, 2}, {3, 4}}; // S
    adj[3][4] = {{3, 3}, {4, 4}}; // T

    adj[4][0] = {{3, 0}, {4, 1}}; // U (Start)
    adj[4][1] = {{4, 0}, {3, 1}, {4, 2}}; // V
    adj[4][2] = {{4, 1}, {4, 3}}; // X
    adj[4][3] = {{4, 2}, {4, 4}}; // Y
    adj[4][4] = {{4, 3}, {3, 4}}; // Z

    auto start_time = high_resolution_clock::now();
    bfs({4, 0});
    auto end_time = high_resolution_clock::now();

    auto duration = duration_cast<nanoseconds>(end_time - start_time).count();
    cout << "BFS Time: " << duration << " nanoseconds" << endl;

    // Resetando o estado de visitação para o DFS
    fill(&vis[0][0], &vis[0][0] + sizeof(vis), false);

    start_time = high_resolution_clock::now();
    dfs({4, 0});
    end_time = high_resolution_clock::now();

    duration = duration_cast<nanoseconds>(end_time - start_time).count();
    cout << "DFS Time: " << duration << " nanoseconds" << endl;

    return 0;
}
