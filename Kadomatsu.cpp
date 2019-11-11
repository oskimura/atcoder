#include <iostream>
#include <vector>


using namespace std;

int INF = 1 << 16;

int N;
vector<int> l, A;
int min(int a, int b)
{
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}

/*
int rec(int i, int a, int b, int c)
{
    if (i == N) {
        if (!a || !b || !c) {
            return INF;
        }
        return abs(a-A) + abs(b-B) + abs(c-C);
    }

    int res = rec(i+1, a, b, c);
    res = min(res, rec(i+1, a + l[i], b, c) + (a ? 10 : 0));
    res = min(res, rec(i+1, a, b + l[i], c) + (b ? 10 : 0));
    res = min(res, rec(i+1, a ,b, c + l[i]) + (c ? 10 : 0));

    return res;
}
*/
int main()
{
    //vector<int> v;

    cin >> N;

    for (int i=0; i<3; i++) {
        cin >> A[i];
    }
    for (int i=0; i<3; i++) {
        cin >> l[i];
    }

    int res = 1 << 29;
    vector<int> bit(3);
    for (bit[0] = 1; bit)

    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        l.push_back(tmp);
    }

    int res = rec(0, 0, 0, 0);
    cout << res;

    return 0;
}