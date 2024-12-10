#include <chrono>
#include <fstream>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

#include "bfs.cpp"
#include "dfs.cpp"
#include "astar.cpp"
#include "greedy.cpp"

#define dbg(x) std::cerr << #x << " = " << x << std::endl

using namespace std;
using namespace std::chrono;

int main() {
  pair<int, int> start = {4, 0};
  pair<int, int> end = {0, 4};

  auto adj = get_adj_matrix();

  AStar astar(5, adj);
  auto path = astar.run(start, end);

  cout << "AStar: ";

  for (auto c : path) cout << c << " ";
  cout << endl;

  Greedy greedy(5, adj);
  path = greedy.run_and_get_path(start, end);

  cout << "Greedy: ";

  for (auto c : path) cout << c << " ";
  cout << endl;

  return 0;
}
