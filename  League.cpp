//  League
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

int toId(vector< vector<int> > &id,int i, int j)
{
    if (i > j) {
        return id[j][i];
    }
    else {
        return id[i][j];
    }
}

vector<bool> visited;
vector<bool> finished;
vector<int> dp;
int dfs(vector< vector<int> > &graph, int s)
{
    if (visited[s]) {
        if (!finished[s]) {
            return -1;
        }
        return dp[s];
    }
    visited[s] = true;
    dp[s] = 1;
    for (int i = 0; i < graph[s].size(); i++) {
        int n = graph[s][i];
        
            int x = dfs(graph,n);
            if (x == -1) {
                return -1;
            }
            else {
                dp[s] = max(dp[s], x + 1);
            }
    }
    finished[s] = true;
    return dp[s];
}

typedef long long LL;
int main()
{
    int N;
    cin >> N;


    vector< vector <int> > v = vector< vector <int> > (N, vector<int>(N-1));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N -1; j++) {
            //cout << i << " " << j << endl;
            cin >> v[i][j];
            v[i][j]--;
        }
    }
    vector < vector <int> > id(N,vector<int>(N));
    int n = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N -1; j++) {
            int k = v[i][j];
            //cout << " i " << i << " j " << j << " k " << k <<  " n " << n << endl;
                if (i<k) {
                    id[i][k] = n;
                    n++;
                }            
        }
    }
    dp = vector<int>(n);
    visited = vector<bool>(n, false);
    finished = vector<bool>(n,false);

/*
    cout << "n " << n << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N ; j++) {
            cout << "i " << i << "j " << j << "id " << toId(id,i,j) << endl;
        }
    }
*/


    
    vector< vector<int> > graph(n, vector<int>());
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 2; j++) {

            //cout << "i" << i << "j" << j << endl;
            int k = v[i][j];
            int from = toId(id,i,k);
            k = v[i][j+1];
            int to = toId(id,i,k);
            //cout << "from" << from << "to" << to << endl;
            graph[from].push_back(to);
        }
    }

    int res = dfs(graph,0);
    if (res==-1) {
        cout << res << endl;
        return 0;
    }

    cout << max(0,res) << endl;

    return 0;
}