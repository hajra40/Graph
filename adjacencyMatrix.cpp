#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,e,u,v;
    cout<<"\nEnter No. of vertices:\n";
    cin>>n;
    cout<<"\nEnter no. of edges:\n";
    cin>>e;
    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        matrix[i][j] = 0;
      }
    }
    for(int i=0;i<e;i++)
    {
        cout<<"\nEnter start:\n";
        cin>>u;
        cout<<"\nTo:\n";
        cin>>v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }
    cout<<"\nGraph Built!!\n";
    cout<<"\nMatrix:\n";
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<matrix[i][j]<<" ";
      }
      cout<<"\n";
    }
    return 0;
}
