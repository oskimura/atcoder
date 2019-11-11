//Buffet
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
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    vector<int> C(N);
    for (int i = 0; i < N-1; i++) {
        cin >> C[i];
    }

    int res = 0;
    for (int i = 0; i < N; i++) {
        int j = A[i]-1;
        res += B[j];
        if (i==0) {
            continue;
        }
        if (A[i]-1 == A[i-1]) {

            //cout << i << " " << j << " " << C[j-1] << endl;
            res += C[j-1];
        }
    }

    cout << res << endl;
    return 0;
}