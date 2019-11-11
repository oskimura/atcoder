#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int res = floor(B / A);
    if (A < B) {
        if (res > C) {
            cout << C;
        }
        else {
            cout << res;
        }
    }
    else {
        cout << 0;
    }

    return 0;
}