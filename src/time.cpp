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
  int astar_sum = 0;
  int greedy_sum = 0;

  for (int i = 0; i < 100; i++) {
    auto start_time = high_resolution_clock::now();

    pair<int, int> start = {4, 0};
    pair<int, int> end = {0, 4};

    auto adj = get_adj_matrix();

    AStar astar(5, adj);
    astar.run(start, end);

    auto end_time = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end_time - start_time);

    astar_sum += duration.count();

    Greedy greedy(5, adj);
    greedy.run(start, end);

    end_time = high_resolution_clock::now();
    duration = duration_cast<microseconds>(end_time - start_time);

    greedy_sum += duration.count();
  }

  cout << "A*: " << astar_sum / 100 << " microseconds" << endl;
  cout << "Greedy: " << greedy_sum / 100 << " microseconds" << endl;

  return 0;
}
