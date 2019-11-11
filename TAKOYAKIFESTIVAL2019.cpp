// TAKOYAKI FESTIVAL 2019

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
    int N;
    int d[50];
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> d[i];
    }

    int sum = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            int tmp = d[i] * d[j];
            sum += tmp;
        }
    }

    cout << sum << endl;
    return 0;
}