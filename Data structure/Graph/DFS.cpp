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

int iterativeDFS(Graph const &graph, int v)
{
	vector<bool> discovered(N);


	stack<int> stack;

	stack.push(v);
	cout<<"\nDFS : ";

	while (!stack.empty())
	{
		v = stack.top();
		stack.pop();

		if (discovered[v])
			continue;


		discovered[v] = true;
		cout << v << " ";


		for (auto it = graph.adjList[v].rbegin();
			it != graph.adjList[v].rend(); ++it)
		{
			int u = *it;
			if (!discovered[u])
				stack.push(u);
		}
	}
}

int main()
{
	vector<Edge> edges = {
		{1, 2}, {1, 7}, {1, 8}, {2, 3}, {2, 6}, {3, 4},
		{3, 5}, {8, 9}, {8, 12}, {9, 10}, {9, 11}
	};

	Graph graph(edges);

	iterativeDFS(graph, 1);

	return 0;
}
