// Uneven Numbers

#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <map>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    long long N;
    cin >> N;

    char s[6];
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        sprintf(s, "%d", i);
        if (strlen(s)%2==1) {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}