#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

#include "utils.cpp"

using namespace std;

class BFS {
 private:
  vector<vector<vector<pair<int, int>>>> adj;
  vector<vector<bool>> vis;

 public:
  BFS() {
    this->adj = get_adj_matrix();
    this->vis = vector<vector<bool>>(5, vector<bool>(5, false));
  }

  void run(pair<int, int> start, pair<int, int> end) {
    queue<pair<int, int>> q;
    q.push(start);
    vis[start.first][start.second] = true;

    while (!q.empty()) {
      auto [x, y] = q.front();
      q.pop();

      if (x == end.first && y == end.second) return;

      for (auto [u, v] : adj[x][y]) {
        if (!vis[u][v]) {
          vis[u][v] = true;
          q.push({u, v});
        }
      }
    }
  }

  vector<char> run_and_get_path(pair<int, int> start, pair<int, int> end) {
    vector<vector<char>> grid = {{'A', 'B', 'C', 'D', 'E'},
                                 {'F', 'G', 'H', 'I', 'J'},
                                 {'K', 'L', 'M', 'N', 'O'},
                                 {'P', 'Q', 'R', 'S', 'T'},
                                 {'U', 'V', 'X', 'Y', 'Z'}};

    vector<vector<pair<int, int>>> parent(5, vector<pair<int, int>>(5));
    parent[start.first][start.second] = {-1, -1};

    queue<pair<int, int>> q;
    q.push(start);
    vis[start.first][start.second] = true;

    while (!q.empty()) {
      auto [x, y] = q.front();
      q.pop();

      if (x == end.first && y == end.second) break;

      for (auto [u, v] : adj[x][y]) {
        if (!vis[u][v]) {
          vis[u][v] = true;
          q.push({u, v});

          parent[u][v] = {x, y};
        }
      }
    }

    vector<char> path;

    auto [x, y] = end;

    while (x != -1 && y != -1) {
      path.push_back(grid[x][y]);
      auto [u, v] = parent[x][y];
      x = u;
      y = v;
    }

    reverse(path.begin(), path.end());

    return path;
  }
};