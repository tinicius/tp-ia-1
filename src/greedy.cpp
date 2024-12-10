#ifndef GREEDY_CPP
#define GREEDY_CPP

#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;

struct Node {
  int x, y;
  int path_cost;

  Node(int x, int y, int cost) : x(x), y(y), path_cost(cost) {}

  bool operator>(const Node &other) const {
    return path_cost > other.path_cost;  // For priority queue ordering
  }
};

class Greedy {
 private:
  vector<vector<vector<pair<int, int>>>> adj;
  vector<vector<bool>> vis;

  static int manhattan_distance(pair<int, int> a, pair<int, int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
  }

 public:
  Greedy(int n, vector<vector<vector<pair<int, int>>>> &adj) {
    this->adj = adj;
    this->vis = vector<vector<bool>>(n, vector<bool>(n, false));
  }

  void run(pair<int, int> start, pair<int, int> end) {
    priority_queue<Node, vector<Node>, greater<Node>> pq;

    pq.push(Node(start.first, start.second, manhattan_distance(start, end)));

    while (!pq.empty()) {
      auto node = pq.top();
      pq.pop();

      if (node.x == end.first && node.y == end.second) {
        return;
      }

      vis[node.x][node.y] = true;

      for (auto [u, v] : adj[node.x][node.y]) {
        if (!vis[u][v]) {
          pq.push(Node(u, v, manhattan_distance({u, v}, end)));
        }
      }
    }
  }

  int run_and_get_max_size(pair<int, int> start, pair<int, int> end) {
    priority_queue<Node, vector<Node>, greater<Node>> pq;

    pq.push(Node(start.first, start.second, manhattan_distance(start, end)));

    int ans = 0;

    while (!pq.empty()) {
      ans = max(ans, (int)pq.size());

      auto node = pq.top();
      pq.pop();

      if (node.x == end.first && node.y == end.second) return ans;

      vis[node.x][node.y] = true;

      for (auto [u, v] : adj[node.x][node.y]) {
        if (!vis[u][v]) {
          pq.push(Node(u, v, manhattan_distance({u, v}, end)));
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

    vector<char> path;
    priority_queue<Node, vector<Node>, greater<Node>> pq;
    map<pair<int, int>, pair<int, int>> parent;

    pq.push(Node(start.first, start.second, manhattan_distance(start, end)));
    parent[start] = {-1, -1};

    while (!pq.empty()) {
      auto node = pq.top();
      pq.pop();

      if (node.x == end.first && node.y == end.second) {
        pair<int, int> step = end;
        while (step != make_pair(-1, -1)) {
          path.push_back(grid[step.first][step.second]);
          step = parent[step];
        }
        reverse(path.begin(), path.end());
        return path;
      }

      vis[node.x][node.y] = true;

      for (auto [u, v] : adj[node.x][node.y]) {
        if (!vis[u][v]) {
          pq.push(Node(u, v, manhattan_distance({u, v}, end)));
          parent[{u, v}] = {node.x, node.y};
        }
      }
    }

    return path;  // Return empty path if no path is found
  }
};

#endif
