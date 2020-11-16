#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int> > G[],int u,int v,int wt)
{
  G[u].push_back(make_pair(v,wt));
  G[v].push_back(make_pair(u,wt));
}

void print(vector<pair<int,int> > G[],int vertex)
{
  int v,w;
  for(int u=0;u<vertex;u++)
  {
    cout<<"\nNode "<<u<<" makes an edge with\n";
    for(auto it=G[u].begin();it!=G[u].end();it++)
    {
      v=it->first;
      w=it->second;
      cout<<"\tNode "<<v<<" with edge weight "<<w<<"\n";
    }
    cout<<"\n";
  }
}

int main(){
  int vertex,u,v,wt,e;
  cout<<"\nEnter vertex of the graph:\n";
  cin>>vertex;
  std::vector<pair<int,int> > G[vertex];
  cout<<"\nEnter no. of edges:\n";
  cin>>e;
  for(int i=0;i<e;i++)
  {
    cout<<"\nEnter the vertex:\n";
    cout<<"\nFrom:\n";
    cin>>u;
    cout<<"\nTo:\n";
    cin>>v;
    cout<<"\nEnter weight of the edge:\n";
    cin>>wt;
    addEdge(G,u,v,wt);
  }
  print(G,vertex);
}
