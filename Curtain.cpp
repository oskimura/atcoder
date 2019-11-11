//Curtain
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
    int x = A - 2 * B;
    cout << (x < 0 ? 0 : x) << endl;
    return 0;
}