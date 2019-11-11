// Slimes

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
    long long N;
    string S;
    cin >> N >> S;

    long long result = N;
    for (int i = 0; i < N; i++) {
        if (i==0) {
            continue;
        }
        if (S[i-1] == S[i]) {
            result--;
        }
    }

    cout << result << endl;
    return 0;
}