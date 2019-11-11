// Power Socket

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
    int A, B;
    cin >> A >> B;
    int cnt = 1;
    int i = 0;
    for (; cnt < B; i++) {
        cnt += (A - 1);
    }
    cout << i << endl;

    return 0;
}