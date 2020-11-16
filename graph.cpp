// #include<iostream>
// using namespace std;
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> G[],int u,int v)
{
    G[u].push_back(v);
    G[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for(int v=0;v<V;++v)
    {
       cout<<"\nAdjacency of vertex "<<v<<" head\n";
       for(auto x:adj[v])
        cout<<x<<" ";
    }
}

int main() {
    int n,e,u,v;
    cout<<"\nEnter No. of vertices:\n";
    cin>>n;
    cout<<"\nEnter no. of edges:\n";
    cin>>e;
    vector<int> G[n];
    for(int i=0;i<e;i++)
    {
        cout<<"\nEnter start and end:\n";
        cin>>u>>v;
        addEdge(G,u,v);
    }
    cout<<"\nGraph Built!!\n";
    printGraph(G,n);
    return 0;
}
