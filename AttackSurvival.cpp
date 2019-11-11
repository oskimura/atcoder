//Attack Survival
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

int main()
{
    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> vec(N,(K-Q));
    for (int i = 0; i < Q; i++) {
        int tmp;
        cin >> tmp;
        vec[tmp-1]++;
    }

    for (int i = 0; i < N; i++) {
        //cout << vec[i];
        if (vec[i] > 0) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}