#include <iostream>
using namespace std;
int main() {
  int n, m;
  cout << "enter no of nodes and edges";
  cin >> n >> m;
  int adj[n + 1][n + 1];
  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < n + 1; j++) {
      adj[i][j] = 0;
    }
  }
  for (int i = 0; i < m; i++) {
    cout << "enter edges input and edge weight";
    int u, v, k;
    cin >> u >> v >> k;
    adj[u][v] = k;
    adj[v][u]=k;
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
enter edges input and edge weight1
2
1
enter edges input and edge weight1
3
4
enter edges input and edge weight4
3
3
enter edges input and edge weight2
4
2
enter edges input and edge weight2
5
5
enter edges input and edge weight4
5
6
0 0 0 0 0 0 
0 0 1 4 0 0 
0 1 0 0 2 5 
0 4 0 0 3 0 
0 0 2 3 0 6 
0 0 5 0 6 0 
*/