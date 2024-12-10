#include <climits>
#ifndef ASTAR_CPP
#define ASTAR_CPP

#include <algorithm>
#include <cmath>
#include <iostream>
#include <queue>
#include <vector>

#include "utils.h"

using namespace std;

class AStar {
 private:
  vector<vector<vector<pair<int, int> > > > adj;
  vector<vector<bool> > vis;
  vector<vector<int> > g_cost;

  static int manhattan_distance(pair<int, int> a, pair<int, int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
  }

 public:
  AStar(int n, vector<vector<vector<pair<int, int> > > > &adj) {
    this->adj = adj;
    this->vis = vector<vector<bool> >(n, vector<bool>(n, false));
    this->g_cost = vector<vector<int> >(n, vector<int>(n, INT_MAX));
  }

  void run(pair<int, int> start, pair<int, int> end) {
    auto cmp = [](const pair<int, pair<int, int> > &a,
                  const pair<int, pair<int, int> > &b) {
      return a.first > b.first;
    };

    priority_queue<pair<int, pair<int, int> >,
                   vector<pair<int, pair<int, int> > >, decltype(cmp)>
        pq(cmp);

    g_cost[start.first][start.second] = 0;
    pq.push({manhattan_distance(start, end), start});

    while (!pq.empty()) {
      auto [f_cost, current] = pq.top();
      pq.pop();

      auto [x, y] = current;

      if (x == end.first && y == end.second) return;

      if (!vis[x][y]) {
        vis[x][y] = true;

        for (auto [u, v] : adj[x][y]) {
          int tentative_g_cost = g_cost[x][y] + 1;
          if (tentative_g_cost < g_cost[u][v]) {
            g_cost[u][v] = tentative_g_cost;
            int h_cost = manhattan_distance({u, v}, end);
            pq.push({g_cost[u][v] + h_cost, {u, v}});
          }
        }
      }
    }
  }

  int run_and_get_max_size(pair<int, int> start, pair<int, int> end) {
    auto cmp = [](const pair<int, pair<int, int> > &a,
                  const pair<int, pair<int, int> > &b) {
      return a.first > b.first;
    };

    priority_queue<pair<int, pair<int, int> >,
                   vector<pair<int, pair<int, int> > >, decltype(cmp)>
        pq(cmp);

    g_cost[start.first][start.second] = 0;
    pq.push({manhattan_distance(start, end), start});

    int ans = 0;

    while (!pq.empty()) {
      ans = max(ans, (int)pq.size());

      auto [f_cost, current] = pq.top();
      pq.pop();

      auto [x, y] = current;

      if (x == end.first && y == end.second) return ans;

      if (!vis[x][y]) {
        vis[x][y] = true;

        for (auto [u, v] : adj[x][y]) {
          int tentative_g_cost = g_cost[x][y] + 1;
          if (tentative_g_cost < g_cost[u][v]) {
            g_cost[u][v] = tentative_g_cost;
            int h_cost = manhattan_distance({u, v}, end);
            pq.push({g_cost[u][v] + h_cost, {u, v}});
          }
        }
      }
    }

    return ans;
  }

  vector<char> run_and_get_path(pair<int, int> start, pair<int, int> end) {
    vector<vector<char> > grid = {{'A', 'B', 'C', 'D', 'E'},
                                  {'F', 'G', 'H', 'I', 'J'},
                                  {'K', 'L', 'M', 'N', 'O'},
                                  {'P', 'Q', 'R', 'S', 'T'},
                                  {'U', 'V', 'X', 'Y', 'Z'}};

    vector<vector<pair<int, int> > > parent(5, vector<pair<int, int> >(5));
    parent[start.first][start.second] = {-1, -1};

    auto cmp = [](const pair<int, pair<int, int> > &a,
                  const pair<int, pair<int, int> > &b) {
      return a.first > b.first;
    };
    priority_queue<pair<int, pair<int, int> >,
                   vector<pair<int, pair<int, int> > >, decltype(cmp)>
        pq(cmp);

    g_cost[start.first][start.second] = 0;
    pq.push({manhattan_distance(start, end), start});

    while (!pq.empty()) {
      auto [f_cost, current] = pq.top();
      pq.pop();

      auto [x, y] = current;

      if (x == end.first && y == end.second) break;

      if (!vis[x][y]) {
        vis[x][y] = true;

        for (auto [u, v] : adj[x][y]) {
          int tentative_g_cost = g_cost[x][y] + 1;
          if (tentative_g_cost < g_cost[u][v]) {
            g_cost[u][v] = tentative_g_cost;
            int h_cost = manhattan_distance({u, v}, end);
            pq.push({g_cost[u][v] + h_cost, {u, v}});
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
