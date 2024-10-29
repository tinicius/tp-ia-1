#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> adj[5][5];

bool vis[5][5];

int bfs(pair<int, int> start)
{

    queue<pair<int, int>> q;
    q.push(start);

    vis[start.first][start.second] = 1;

    while (!q.empty())
    {

        auto [x, y] = q.front();
        q.pop();

        for (auto [u, v] : adj[x][y])
        {

            if (!vis[u][v])
            {
                vis[u][v] = 1;
                q.push({u, v});
            }
        }
    }
}

int main()
{

    adj[0][0] = {{0, 1}, {1, 0}}; // A
    adj[0][1] = {{0, 0}};         // B
    adj[0][2] = {{0, 3}, {1, 2}}; // C
    adj[0][3] = {{0, 2}, {0, 4}}; // D
    adj[0][4] = {{0, 3}, {1, 4}}; // E

    // Segunda linha
    adj[1][0] = {{0, 0}, {1, 1}};         // F
    adj[1][1] = {{1, 0}, {1, 2}};         // G
    adj[1][2] = {{0, 2}, {1, 1}, {1, 3}}; // H
    adj[1][3] = {{1, 2}, {2, 3}};         // I
    adj[1][4] = {{0, 4}};                 // J

    // Terceira linha
    adj[2][0] = {{3, 0}};                 // K
    adj[2][1] = {{2, 2}, {3, 1}};         // L
    adj[2][2] = {{0, 4}, {2, 1}, {2, 3}}; // M
    adj[2][3] = {{2, 4}, {2, 2}, {1, 3}}; // N
    adj[2][4] = {{2, 3}};                 // O

    // Quarta linha
    adj[3][0] = {{2, 0}, {4, 0}}; // P
    adj[3][1] = {{2, 1}, {4, 1}}; // Q
    adj[3][2] = {{2, 2}, {3, 3}}; // E (*R)
    adj[3][3] = {{3, 2}, {3, 4}}; // S
    adj[3][4] = {{3, 3}, {4, 4}}; // T

    // Quinta linha
    adj[4][0] = {{3, 0}, {4, 1}};         // U (Start)
    adj[4][1] = {{4, 0}, {3, 1}, {4, 2}}; // V
    adj[4][2] = {{4, 1}, {4, 3}};         // X
    adj[4][3] = {{4, 2}, {4, 4}};         // Y
    adj[4][4] = {{4, 3}, {3, 4}};         // Z



    bfs({4, 0});
}

