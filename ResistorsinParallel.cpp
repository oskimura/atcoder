// Resistors in Parallel
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

using namespace std;

int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = a % b;

        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int N;
    vector<int> A;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        int tmp;
        cin >> tmp;
        A.push_back(tmp);
    }
    int g = 1;
    for (int i = 0; i < N; i++)
    {
        g = gcd(A[i - 1], A[i]);
    }
    int l = 1;
    for (int i = 0; i < N; i++) {
        l = lcm(l, A[i]);
    }
    //cout << "lcm = " << l << endl;
    int sum1 = 0;
    for (int i = 0; i < N; i++) {
        sum1 += l / A[i];
        //cout << l / A[i] << endl;
    }
    cout << std::setprecision(100000) << (double) ((double)l / (double)sum1) << endl;

    return 0;
} // Resistors in Parallel
