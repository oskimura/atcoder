// Changing a Character
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>

using namespace std;
int main()
{
    int N,K;
    cin >> N >> K;
    string S;
    cin >> S;
    int d = 'a' - 'A';
    S[K-1] = S[K-1] + d;
    cout << S << endl;

    return 0;
}