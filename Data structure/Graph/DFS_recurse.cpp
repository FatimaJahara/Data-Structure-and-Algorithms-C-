#include <bits/stdc++.h>
using namespace std;
#define N 13

struct Edge {
	int src, dest;
};


class Graph
{
	public:
	vector<int> adjList[N];

	Graph(vector<Edge> edges)
	{
		for (int i = 0; i < edges.size(); i++)
		{
			int src = edges[i].src;
			int dest = edges[i].dest;

			adjList[src].push_back(dest);
			adjList[dest].push_back(src);
		}
	}
};

int DFS(Graph const &graph, int v, vector<bool> &discovered)
{
	discovered[v] = true;

	cout << v << " ";

	for (int u : graph.adjList[v])
	{
		if (!discovered[u])
			DFS(graph, u, discovered);
	}
}

int main()
{
	vector<Edge> edges = {
		{1, 2}, {1, 7}, {1, 8}, {2, 3}, {2, 6}, {3, 4},
		{3, 5}, {8, 9}, {8, 12}, {9, 10}, {9, 11}
	};

	Graph graph(edges);

	vector<bool> discovered(N);


	for (int i = 1; i < N; i++)
		if (discovered[i] == false)
			DFS(graph, i, discovered);

	return 0;
}
