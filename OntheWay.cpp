// On the Way

#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int A,B,C;
    cin >> A >> B >> C;
    if (A>B) {
        swap(A,B);
    }
    if (C >= A && C <= B) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }


    return 0;
}