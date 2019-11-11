//Powerful Discount Tickets
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
#include <priority_queue>

using namespace std;


// 2 4 3
int main()
{
    int N,M;
    cin >> N >> M;
    vector<int> vec;
    priority_queue<int> q;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
        q.push(log(tmp));
    }

    int ave = accumulate(lg.begin(), lg.end(),0) / N;
    for (int i = M; i; i--) {
        int x = q.top();
        x--;
        q.pop()
        q.push(x);
    }

    return 0;
}