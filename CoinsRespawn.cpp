//Coins Respawn
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <map>
#include <stdio.h>
#include <string.h>
#include <initializer_list>
#include <algorithm>
#include <numeric>
#include <iomanip>
#include <queue>
#include <set>

using namespace std;
typedef long long LL;
struct Edge
{
    int to;
    int cost;
    Edge(int to, int cost)
    {
        this->to = to;
        this->cost = cost;
    }
};

typedef vector<vector<Edge> > Adj;
Adj graph;
vector<LL> dist;

const LL inf = 1e15;

vector< vector<int> > go;
vector< vector<int> > back;

int main()
{
    int N, M, P;
    cin >> N >> M >> P;
    graph = vector<vector<Edge> >(N);
    dist = vector<LL>(N, inf);
    go = vector< vector<int> >(N);
    back = vector< vector<int> >(N);

    for (int i = 0; i < M; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        Edge x(b - 1, -(c - P));
        graph[a - 1].push_back(x);
        go[a - 1].push_back(b - 1);
        back[b - 1].push_back(a - 1);
    }

    // bellman-ford
    dist[0] = 0;
    for (int i = 0; i < N; i++)
    {
        for (int v = 0; v < N; v++)
        {
            for (int k = 0; k < graph[v].size(); k++)
            {
                Edge e = graph[v][k];
                if (dist[v] != inf && dist[e.to] > dist[v] + e.cost)
                {
                    dist[e.to] = dist[v] + e.cost;
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int v = 0; v < N; v++)
        {
            for (int k = 0; k < graph[v].size(); k++)
            {
                Edge e = graph[v][k];
                if (dist[v] != inf  && dist[e.to] > dist[v] + e.cost)
                {
                    dist[e.to] = -inf;
                }
            }
        }
    }

    if (dist[N - 1] == -inf) {
        cout << -1;
        return 0;
    }

    cout << max((LL)0, -1 * (dist[N - 1])) << endl;

    return 0;
} //Coins Respawn