#include<bits/stdc++.h>
#include<vector>
using namespace std;
void BFS(queue<int> Q,int visited[]);
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
    int visited[1000]={0};
    queue<int> Q;
    for(i=1;i<=vertex;i++)
    {
        if(visited[i]==0)
        {
            visited[i]=1;
            Q.push(i);


            BFS(Q,visited);
        }

    }
}


void BFS(queue<int> Q,int visited[])
{
    int i,v,u;
    if(Q.empty())
        return;
    u=Q.front();
    Q.pop();
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
    BFS(Q,visited);

}



