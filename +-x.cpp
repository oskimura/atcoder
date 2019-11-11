// +-x

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
    int A,B;

    cin >> A >> B;
    int x = max(A+B,max(A-B,A*B));
    cout << x << endl;

    return 0;
}