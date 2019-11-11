// Common Divisor

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

unsigned euclidean_gcd(unsigned a, unsigned b)
{
    if(a < b) euclidean_gcd(b, a);
    unsigned r;
    while ((r = a % b)) {
        a = b;
        b = r;
    }
    return b;
}

vector<int> divisors(int n) {
    vector<int> res;
    for(int i = 1; i * i <= n; ++i) {
        if(n % i != 0){
            continue;
        }
        res.push_back(i);
        if(n / i == i) {
            continue; // 上の行で追加済み。
        }
        res.push_back(n / i);
    }
    return res;
}

int f(int a, int b, int k)
{
    if (k == 0) {
        return b;
    }
    else {
        return f(b, a % b, k - 1);
    }
}

int main()
{
    int A,B,K;
    cin >> A >> B >> K;
    cout << f(A,B,K);

    return 0;
}