#ifndef DFS_CPP
#define DFS_CPP

#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>


#include "utils.h"


using namespace std;

class DFS {
 private:
  vector<vector<vector<pair<int, int>>>> adj;
  vector<vector<bool>> vis;

 public:
  DFS(int n, vector<vector<vector<pair<int, int>>>>& adj) {
    this->adj = adj;
    this->vis = vector<vector<bool>>(n, vector<bool>(n, false));
  }

  void run(pair<int, int> start, pair<int, int> end) {
    stack<pair<int, int>> s;
    s.push(start);

    while (!s.empty()) {
      auto [x, y] = s.top();
      s.pop();

      if (x == end.first && y == end.second) return;

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

  int run_and_get_max_size(pair<int, int> start, pair<int, int> end) {
    stack<pair<int, int>> s;
    s.push(start);

    int ans = 0;

    while (!s.empty()) {
      ans = max(ans, (int)s.size());
      auto [x, y] = s.top();
      s.pop();

      if (x == end.first && y == end.second) return ans;

      if (!vis[x][y]) {
        vis[x][y] = true;

        for (auto [u, v] : adj[x][y]) {
          if (!vis[u][v]) {
            s.push({u, v});
          }
        }
      }
    }

    return ans;
  }

  vector<char> run_and_get_path(pair<int, int> start, pair<int, int> end) {
    vector<vector<char>> grid = {{'A', 'B', 'C', 'D', 'E'},
                                 {'F', 'G', 'H', 'I', 'J'},
                                 {'K', 'L', 'M', 'N', 'O'},
                                 {'P', 'Q', 'R', 'S', 'T'},
                                 {'U', 'V', 'X', 'Y', 'Z'}};

    vector<vector<pair<int, int>>> parent(5, vector<pair<int, int>>(5));
    parent[start.first][start.second] = {-1, -1};

    stack<pair<int, int>> s;
    s.push(start);

    while (!s.empty()) {
      auto [x, y] = s.top();
      s.pop();

      if (x == end.first && y == end.second) break;

      if (!vis[x][y]) {
        vis[x][y] = true;

        for (auto [u, v] : adj[x][y]) {
          if (!vis[u][v]) {
            s.push({u, v});
            parent[u][v] = {x, y};
          }
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

#endif