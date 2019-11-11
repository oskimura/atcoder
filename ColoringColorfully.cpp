// Coloring Colorfully
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int len = S.size();

    vector<char> tmp1;
    tmp1.assign(len,' ');
    vector<char> tmp2;
    tmp2.assign(len,' ');

    for (int i = 0; i < len; i++) {
        tmp1[i] = i % 2 == 0 ? '1' : '0';
    }
    for (int i = 0; i < len; i++) {
        tmp2[i] = i % 2 == 0 ? '0' : '1';
    }

    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < len; i++) {
        char c = S[i];
        if (c != tmp1[i]) {
            count1++;
        }
        if (c != tmp2[i]) {
            count2++;
        }
    }
    
    int result = count1 < count2 ? count1 : count2;

    cout << result << endl;
    return 0;
}