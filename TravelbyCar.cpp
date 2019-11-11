// Travel by Car

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

#define INF 1000000001


vector< vector <int> > graph;
vector< vector<int> > dp;

void WarshallFloyd(vector< vector <int> > graph, int N)
{
    // init
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (graph[i][j]) {
                dp[i][j] = graph[i][j];
            }
            else {
                dp[i][j] = INF;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N ; k++) {
            for (int j = 0; j < N ; j++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
            }
        }
    }
}

int main()
{
    int N, M, L;
    cin >> N >> M >> L;

    graph = vector<vector<int> >(N, vector<int>(N,INF));
    dp = vector< vector<int> >(303, vector<int>(303, INF));

    for (int i = 0; i < M; i++) {
        int from, to ,cost;
        cin >> from >> to >> cost;
        from--;
        to--;
        graph[from][to] = cost;
        graph[to][from] = cost;
    }

    int Q;
    cin >> Q;

    WarshallFloyd(graph, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            dp[i][j] = i == j ? 0 : dp[i][j] > L ? INF : 1;
        }
    }
    WarshallFloyd(dp,N);

    for (int i = 0; i < Q; i++) {
        int from, to;
        cin >> from >> to;
        from--;
        to--;

        int tmp = dp[from][to];
        cout << (tmp == INF ? -1 : tmp-1) << endl;
    }

    return 0;
}