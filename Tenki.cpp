// Tenki
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
    string S, T;

    cin >> S;
    cin >> T;
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        if (S[i] == T[i]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}