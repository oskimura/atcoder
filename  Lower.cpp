//  Lower

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
int main()
{
    int N;
    vector<LL> H;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        H.push_back(tmp);
    }
    int m = 0;
    int tmp = 0;
    for (int i = 0; i < N; i++) {
        
        if (i == 0) {
            continue;
        }
        
        if (H[i-1] >= H[i]) {
            tmp++;
            m = max(m,tmp);
        }
        else {
            tmp = 0;
        }
    }
    cout << m << endl;
}

