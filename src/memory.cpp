#include <chrono>
#include <fstream>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

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
  int astar_max = astar.run_and_get_max_size(start, end);

  Greedy greedy(5, adj);
  int greedy_max = greedy.run_and_get_max_size(start, end);

  int coast = sizeof(pair<int, int>);

  dbg(coast);
  dbg(astar_max);
  dbg(greedy_max);

  cout << "A* max memory usage: " << astar_max * coast << " B" << endl;
  cout << "Greedy max memory usage: " << greedy_max * coast << " B" << endl;

  return 0;
}
