// *e**** ********e* *e****e* ****e**


#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    int N,K;
    string S;
    cin >> N >> S >> K;

    char r = S[K-1];
    for (int i = 0; i < N; i++) {
        if (r != S[i]) {
            S[i] = '*';
        }
    }

    cout << S << endl;

    return 0;
}
