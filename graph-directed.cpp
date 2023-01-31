#include <iostream>
using namespace std;
int main() {
  int n, m;
  cout << "enter no of nodes and edges";
  cin >> n >> m;
  int adj[n + 1][n + 1];

  for (int i = 0; i < m; i++) {
    cout << "enter edges input";
    int u, v;
    cin >> u >> v;
    adj[u][v] = 1;
    
  }

  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < n + 1; j++) {
      if (adj[i][j] != 1) {
        adj[i][j] = 0;
      }
    }
  }
  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < n + 1; j++) {
      cout << adj[i][j] << " ";
    }
    cout << endl;
  }
}

/*
output:-
enter no of nodes and edges5
6
enter edges input1
2
enter edges input1
3
enter edges input4
3
enter edges input2
4
enter edges input2
5
enter edges input4
5
0 0 0 0 0 0 
0 0 1 1 0 0 
0 0 0 0 1 1 
0 0 0 0 0 0 
0 0 0 1 0 1 
0 0 0 0 0 0 
*/