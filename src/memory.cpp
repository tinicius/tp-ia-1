#include <chrono>
#include <fstream>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

#include "bfs.cpp"
#include "dfs.cpp"

#define dbg(x) std::cerr << #x << " = " << x << std::endl

using namespace std;
using namespace std::chrono;

int main() {
  pair<int, int> start = {4, 0};
  pair<int, int> end = {0, 4};

  auto adj = get_adj_matrix();

  BFS bfs(5, adj);
  int bfs_max = bfs.run_and_get_max_size(start, end);

  DFS dfs(5, adj);
  int dfs_max = dfs.run_and_get_max_size(start, end);

  int coast = sizeof(pair<int, int>);

  dbg(coast);
  dbg(bfs_max);
  dbg(dfs_max);

  cout << "BFS max memory usage: " << bfs_max * coast << " B" << endl;
  cout << "DFS max memory usage: " << dfs_max * coast << " B" << endl;

  return 0;
}
