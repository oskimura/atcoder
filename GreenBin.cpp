// Green Bin
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

int main()
{
    int N;
    cin >> N;
    map<string, long long> m;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int tmp = m[s];
        tmp++;
        m[s] = tmp;
    }
    
    long long cnt = 0;
    for (auto it = m.begin(); it != m.end(); ++it) {
        long long value = it->second;
        if (value > 1) {
            cnt += ((value * (value - 1)) / 2);
        }
    }

    cout << cnt << endl;

    return 0;
}