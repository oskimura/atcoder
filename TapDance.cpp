//Tap Dance
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
    string S;
    cin >> S;
    bool flag = true;
    for (int i = 0; i < S.size(); i++) {
        if (i % 2 == 1) {
            if (S[i] == 'L' || S[i] == 'U' || S[i] == 'D') {
                continue;
            }
            else {
                flag = false;
            }
        }
        else {
            if (S[i] == 'R' || S[i] == 'U' || S[i] == 'D') {
                continue;
            }
            else {
                flag = false;
            }
        }
    }
    if (flag) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}