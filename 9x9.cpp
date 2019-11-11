// 9x9

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
    int A,B;
    cin >> A >> B;

    if (A < 10 && B < 10) {
        cout << A * B << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}