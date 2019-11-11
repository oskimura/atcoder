// Summer Vacation
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <map>
#include <stdio.h>
#include <string.h>
#include <initializer_list>
#include <algorithm>

using namespace std;

struct V {
    int a;
    int b;
};

/*
int solve(vector<V> v, int n, int k, int m)
{
    if (k > n && k < m) {
        max();
    }
    else {
        return 0;
    }

}
 */

int main()
{
    int N,M;
    cin >> N >> M;


    vector<V> vec;
    for (int i = 0; i < N; i++) {
        int a,b;
        cin >> a >> b;
        V s;
        s.a=a;
        s.b=b;
        vec.push_back(s);
    };

    sort(vec.begin(), vec.end(), [](V x, V y){ return x.a < y.a;});
    cout << "sort" << endl;
    for (int i=0; i < vec.size(); i++) {
        cout << vec[i].a << " " << vec[i].b << endl;
    }

    int j = 0;
    int score = 0;
    for (int i = 0; i <= M; i++) {
        int m = 0;
        for (; vec[j].a == i && j < N; j++) {
            m = max(m,vec[j].b);
            cout << "m " << m << endl;
        }
        score += m;
    }

    cout << score;
    return 0;
}