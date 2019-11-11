// Stones

#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int N;
    string S;
    cin >> N >> S;
    int cnt = 0;
    for (int i = 1; i < N ; i++) {
        int j = i - 1;
        if (S[j] == '#' && S[i] == '.') {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}