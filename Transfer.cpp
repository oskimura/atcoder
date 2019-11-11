// Harmony

#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <map>

using namespace std;

int main()
{
    long long A,B,C;
    cin >> A >> B >> C;
    long long tmp = C - (A - B);
    cout << (tmp >= 0? tmp : 0) << endl;

    return 0;
}