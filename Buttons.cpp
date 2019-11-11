// A - Buttons

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int A,B;
    cin >> A >> B;

    int total = 0;
    if (A <= B) {
        int tmp = A;
        A = B;
        B = tmp;
    }

    total += A;
    A--;
    if (A >= B) {
        total += A;
    }
    else {
        total += B;
    }

    cout << total << endl;
    return 0;
}