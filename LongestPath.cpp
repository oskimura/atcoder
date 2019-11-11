
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

const int MAX_N = 110;
const int MAX_V = 100100;

const int INF = 1<<29;
int dp[100100];
vector< vector<int> > g;

int rec(int v) {
    if (dp[v] != -1) {
        return dp[v];
    }
    else {
        int res = 0;
        for (auto v1 : g[v]) {
            auto n = rec(v1)+1;
            res = res > n? res : n;
        }
        dp[v] = res;
        return res;
    }
}

int main()
{
    int n,m;
    cin >> n >> m;
    g.assign(n, vector<int>());

    for (int i=0; i<m; i++) {
        int from, to;
        cin >> from >> to;

        g[from-1].push_back(to-1);
    }

    for (int i=0; i<n; i++) {
        dp[i] = -1;
    }

    auto res = 0;
    for (int i=0; i<n; i++) {
        auto m = rec(i);
        res = res > m ? res: m;
    }
    cout << res << endl;
    return 0;
}