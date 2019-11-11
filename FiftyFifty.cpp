// A - Fifty-Fifty

#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <map>

using namespace std;

int main()
{
    string S;
    map<char, int> m;

    cin >> S;

    for (int i = 0; i < S.length(); i++) {
        int tmp = m[S.c_str()[i]];
        tmp++;
        m[S.c_str()[i]] = tmp;
    }
    for (auto iter = m.begin(); iter != m.end(); iter++) {
        if (iter->second == 2) {
            continue;
        }
        else {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}