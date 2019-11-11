// D - Triangles

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
    vector<int> L;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        L.push_back(tmp);
    }
    int result = 0;
    for (int i = 0; i < N - 2; i++) {
        int a = L[i];
        for (int j = i + 1; j < N - 1; j++) {
            int b = L[j];
            for (int k = j + 1; k < N; k++) {
                int c = L[k];
                if ((a < b + c)  && (b < c + a) && (c < a + b)) {
                    result++;
                }
            }
        }
    }
    cout << result << endl;
    return 0;
}