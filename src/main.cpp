#include <chrono>
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

#include "bfs.cpp"
#include "dfs.cpp"

using namespace std;
using namespace std::chrono;

int main() {
  auto start_time = high_resolution_clock::now();
  auto end_time = high_resolution_clock::now();
  auto duration = duration_cast<nanoseconds>(end_time - start_time).count();

  BFS bfs;
  auto path = bfs.run_and_get_path({4, 0}, {0, 4});

  for (auto p : path) cout << p << " ";
  cout << endl;

  DFS dfs;
  path = dfs.run_and_get_path({4, 0}, {0, 4});

  for (auto p : path) cout << p << " ";
  cout << endl;

  return 0;
}
