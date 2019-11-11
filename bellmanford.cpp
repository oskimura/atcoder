///
#include <iostream>
#include <vector>

using namespace std;

struct Edge
{
    int to, cost;
    Edge(int to, int cost)
    {
        this->to = to;
        this->cost = cost;
    }
};

const int inf = 50000;
typedef vector<vector<Edge>> AdjList;
AdjList graph;

vector<int> dist;

bool bellmanford(int n, int s)
{
    for (int v = 0; v < n; v++)
    {
        for (int k = 0; k < graph[v].size(); k++)
        {
            Edge e = graph[v][k];;
            if (dist[e.to] > dist[v] + e.cost) {
                dist[e.to] = dist[v] + e.cost;
            }
        }
    }
} ///