#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

vector<pair<int, int>> adj[5][5];

bool vis[5][5];

map<char, char> parent;

char dict[5][5];

int bfs(pair<int, int> start) {
  queue<pair<int, int>> q;
  q.push(start);

  vis[start.first][start.second] = 1;

  parent[dict[start.first][start.second]] = '!';

  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();

    if (x == 0 && y == 4) return 0;

    for (auto [u, v] : adj[x][y]) {
      if (!vis[u][v]) {
        vis[u][v] = 1;
        q.push({u, v});
        parent[dict[u][v]] = dict[x][y];
      }
    }
  }

  return 0;
}

int dfs(pair<int, int> start) {
  stack<pair<int, int>> q;
  q.push(start);

  vis[start.first][start.second] = 1;

  parent[dict[start.first][start.second]] = '!';

  while (!q.empty()) {
    auto [x, y] = q.top();
    q.pop();

    // if (x == 0 && y == 4) return 0;

    for (auto [u, v] : adj[x][y]) {
      if (!vis[u][v]) {
        vis[u][v] = 1;
        q.push({u, v});
        parent[dict[u][v]] = dict[x][y];
      }
    }
  }

  return 0;
}

void printVis() {
  cout << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cout << vis[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}

int main() {
  dict[0][0] = 'A';
  dict[0][1] = 'B';
  dict[0][2] = 'C';
  dict[0][3] = 'D';
  dict[0][4] = 'E';

  dict[1][0] = 'F';
  dict[1][1] = 'G';
  dict[1][2] = 'H';
  dict[1][3] = 'I';
  dict[1][4] = 'J';

  dict[2][0] = 'K';
  dict[2][1] = 'L';
  dict[2][2] = 'M';
  dict[2][3] = 'N';
  dict[2][4] = 'O';

  dict[3][0] = 'P';
  dict[3][1] = 'Q';
  dict[3][2] = 'R';
  dict[3][3] = 'S';
  dict[3][4] = 'T';

  dict[4][1] = 'V';
  dict[4][2] = 'X';
  dict[4][3] = 'Y';
  dict[4][4] = 'Z';

  // Primeira linha
  adj[0][0] = {{0, 1}, {1, 0}};  // A
  adj[0][1] = {{0, 0}};          // B
  adj[0][2] = {{0, 3}, {1, 2}};  // C
  adj[0][3] = {{0, 2}, {0, 4}};  // D
  adj[0][4] = {{0, 3}, {1, 4}};  // E

  // Segunda linha
  adj[1][0] = {{0, 0}, {1, 1}};          // F
  adj[1][1] = {{1, 0}, {1, 2}};          // G
  adj[1][2] = {{0, 2}, {1, 1}, {1, 3}};  // H
  adj[1][3] = {{1, 2}, {2, 3}};          // I
  adj[1][4] = {{0, 4}};                  // J

  // Terceira linha
  adj[2][0] = {{3, 0}};                  // K
  adj[2][1] = {{2, 2}, {3, 1}};          // L
  adj[2][2] = {{2, 1}, {2, 3}};          // M
  adj[2][3] = {{2, 4}, {2, 2}, {1, 3}};  // N
  adj[2][4] = {{2, 3}};                  // O

  // Quarta linha
  adj[3][0] = {{2, 0}, {4, 0}};  // P
  adj[3][1] = {{2, 1}, {4, 1}};  // Q
  adj[3][2] = {{2, 2}, {3, 3}};  // E (*R)
  adj[3][3] = {{3, 2}, {3, 4}};  // S
  adj[3][4] = {{3, 3}, {4, 4}};  // T

  // Quinta linha
  adj[4][0] = {{3, 0}, {4, 1}};          // U (Start)
  adj[4][1] = {{4, 0}, {3, 1}, {4, 2}};  // V
  adj[4][2] = {{4, 1}, {4, 3}};          // X
  adj[4][3] = {{4, 2}, {4, 4}};          // Y
  adj[4][4] = {{4, 3}, {3, 4}};          // Z

  dfs({4, 0});

  if (!vis[0][4]) {
    cout << "No path!" << endl;
  } else {
    vector<char> path;

    for (char v = dict[1][4]; v != '!'; v = parent[v]) path.push_back(v);

    reverse(path.begin(), path.end());

    cout << "Path: ";

    for (char v : path) cout << v << " ";
  }

  printVis();
}