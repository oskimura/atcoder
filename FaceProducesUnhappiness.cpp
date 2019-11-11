// Face Produces Unhappiness
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


// LRLRRL
// LLRLLL
int main()
{
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
   

    for (int i = 0; i < K; i++) {
        for (int r = 0; r < N; r++) {
                for (int l = 0; l < r; l++) {
                    for (int i = r; i < l i++) {
                        
                    }
                }
        }
    }

    // score
    int m = 0;
    int c = 0;
    for (int i = 0; i < N; i++) {
        if (i==0) {
            continue;
        }
        if (S[i] == S[i-1]) {
            c++;
            m = max(c,m);
        }
        c = 0;
    }

    return 0;
}