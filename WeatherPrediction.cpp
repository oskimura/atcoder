
//Weather Prediction
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
    string S;
    cin >> S;
    if (S  == "Sunny") {
        cout << "Cloudy";
    } else if (S == "Cloudy") {
        cout << "Rainy";
    } else {
        cout << "Sunny";
    }
    return 0;
}