// Kenken Race

#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int A,B,C,D;
    string S;

    cin >> S;

    int w[10000];
    int b[10000];

    for (int i = 0; i < S.length(); i++) {
        if (S[i] == '.') {
            w[i] = 1;
            b[i] = 0;
        }
        else {
            b[i] = 1;
            w[i] = 0;
        }
    }
    for (int i = 1; i < S.length(); i++) {
        b[i] = b[i] + b[i-1];
    }
    for (int i = 1; i < S.length(); i++) {
        w[i] = w[i] + w[i-1];
    }


    return 0;
}