#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n,m;
  cout<<"enter nodes and edges";
  cin>>n>>m;
  vector<int>a[n+1];
 for(int i=0;i<m;i++)
   {int u,v;
     cout<<"enter edges input";
       cin>>u>>v;
    a[u].push_back(v);
     a[v].push_back(u);
     
   }
  for(int i=0;i<n+1;i++)
    {
      for(auto j=0;j<a[i].size();j++)
        {
          cout<<a[i][j]<<" ";
        
        }
      cout<<endl;
    }
  return 0;
  }
/*
output:-
  enter nodes and edges5
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

2 3 
1 4 5 
1 4 
3 2 5 
2 4 
*/