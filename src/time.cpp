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
  int bfs_sum = 0;
  int dfs_sum = 0;

  for (int i = 0; i < 100; i++) {
    auto start_time = high_resolution_clock::now();

    pair<int, int> start = {4, 0};
    pair<int, int> end = {0, 4};

    auto adj = get_adj_matrix();

    BFS bfs(5, adj);
    bfs.run(start, end);

    auto end_time = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end_time - start_time);

    bfs_sum += duration.count();

    DFS dfs(5, adj);
    dfs.run(start, end);

    end_time = high_resolution_clock::now();
    duration = duration_cast<microseconds>(end_time - start_time);

    dfs_sum += duration.count();
  }

  cout << "BFS: " << bfs_sum / 100 << " microseconds" << endl;
  cout << "DFS: " << dfs_sum / 100 << " microseconds" << endl;

  return 0;
}
