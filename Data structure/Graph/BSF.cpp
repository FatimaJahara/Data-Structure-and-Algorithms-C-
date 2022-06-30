#include<bits/stdc++.h>
#include<vector>
using namespace std;
void BFS(int n,int src);
vector<int> edges[1000];

int main()
{
    int edge,vertex,i,v1,v2;
    cout<<"Enter no. of vertices in the graph : ";
    cin>>vertex;
    cout<<"\nEnter no. of edges in the graph : ";
    cin>>edge;
    cout<<"\n\nEnter the two vertices which are connected : ";
    for(i=1;i<=edge;i++)
    {
        cout<<"\n"<<i<<". ";
        cout<<"Vertex 1 : ";
        cin>>v1;
        cout<<"\nVertex 2 : ";
        cin>>v2;
        edges[v1].push_back(v2);
        edges[v2].push_back(v1);
    }
    int s;
    cout<<"\nEnter the source node : ";
    cin>>s;
    BFS(vertex,s);
}
void BFS(int n,int src)
{
    int i,j;
    queue<int> Q;
    Q.push(src);
    int level[1000];
    int visited[1000]={0};
    visited[src]=1;

    cout<<"\n\nBSF : ";
    while(!Q.empty())
    {
        int u=Q.front();
        cout<<u<<" ";
        for(i=0;i<edges[u].size();i++)
        {
            int v=edges[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                Q.push(v);
            }
        }
        Q.pop();

    }

}


