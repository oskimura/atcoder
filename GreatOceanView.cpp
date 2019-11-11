// Great Ocean View

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> H;
    H.assign(N, -1);
    int max = 0;
    int count = 0;
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
    for (int i = 0; i < N; i++) {
        if (max <= H[i]) {
            max = H[i];
            count++;
        }
    }

    cout << count << endl;
    return 0;
}