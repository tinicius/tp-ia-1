#ifndef UTILS_CPP
#define UTILS_CPP

#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

vector<vector<vector<pair<int, int>>>> get_adj_matrix() {
  vector<vector<vector<pair<int, int>>>> adj(5,
                                             vector<vector<pair<int, int>>>(5));

  adj[0][0] = {{0, 1}, {1, 0}};  // A
  adj[0][1] = {{0, 0}};          // B
  adj[0][2] = {{0, 3}, {1, 2}};  // C
  adj[0][3] = {{0, 2}, {0, 4}};  // D
  adj[0][4] = {{0, 3}, {1, 4}};  // E

  adj[1][0] = {{0, 0}, {1, 1}};          // F
  adj[1][1] = {{1, 0}, {1, 2}};          // G
  adj[1][2] = {{0, 2}, {1, 1}, {1, 3}};  // H
  adj[1][3] = {{1, 2}, {2, 3}};          // I
  adj[1][4] = {{0, 4}};                  // J

  adj[2][0] = {{3, 0}};                  // K
  adj[2][1] = {{2, 2}, {3, 1}};          // L
  adj[2][2] = {{2, 1}, {2, 3}};          // M
  adj[2][3] = {{2, 4}, {2, 2}, {1, 3}};  // N
  adj[2][4] = {{2, 3}};                  // O

  adj[3][0] = {{2, 0}, {4, 0}};  // P
  adj[3][1] = {{2, 1}, {4, 1}};  // Q
  adj[3][2] = {{2, 2}, {3, 3}};  // R
  adj[3][3] = {{3, 2}, {3, 4}};  // S
  adj[3][4] = {{3, 3}, {4, 4}};  // T

  adj[4][0] = {{3, 0}, {4, 1}};          // U (Start)
  adj[4][1] = {{4, 0}, {3, 1}, {4, 2}};  // V
  adj[4][2] = {{4, 1}, {4, 3}};          // X
  adj[4][3] = {{4, 2}, {4, 4}};          // Y
  adj[4][4] = {{4, 3}, {3, 4}};          // Z

  return adj;
}

#endif