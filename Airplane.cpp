//Airplane.cpp

#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int P,Q,R;

    cin >> P >> Q >> R;

    int max = 0;

    max = P > Q ? P : Q;
    max = max > R ? max : R;

    int result = P + Q + R - max;

    cout << result << endl;

    return 0;
}