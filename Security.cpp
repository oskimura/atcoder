// A - Security
#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    string S;
    cin >> S;

    int previous = -1;
    for (int i = 0; i < S.length(); i++) {
        if (previous == S[i] - '0') {
            cout << "Bad";
            return 0;
        }
        previous = S[i]  - '0';
    }
    cout << "Good";

    return 0;
}