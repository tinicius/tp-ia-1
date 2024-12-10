#include <chrono>
#include <fstream>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

#include "bfs.cpp"
#include "dfs.cpp"
#include "astar.cpp"

#define dbg(x) std::cerr << #x << " = " << x << std::endl

using namespace std;
using namespace std::chrono;

int main() {
  pair<int, int> start = {4, 0};
  pair<int, int> end = {0, 4};

  auto adj = get_adj_matrix();

  BFS bfs(5, adj);
  auto path = bfs.run_and_get_path(start, end);

  cout << "BFS: ";

  for (auto c : path) cout << c << " ";
  cout << endl;

  DFS dfs(5, adj);
  path = dfs.run_and_get_path(start, end);

  cout << "DFS: ";

  for (auto c : path) cout << c << " ";
  cout << endl;

  AStar astar(5, adj);
  cout << "AStar: ";
  for (auto c : path) cout << c << " ";
  cout << endl;

  return 0;
}
