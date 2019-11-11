// One Clue
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
    int K, X;
    cin >> K >> X;
    for (int i = X - K + 1; i < X + K; i++) {
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}