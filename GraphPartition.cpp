// Graph Partition
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

//vector< vector<int> > G;
int G[200][200];

int main()
{
    int N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int tmp;
            cin >> tmp;
            G[i][j] = tmp;
        }
    }
    

    return 0;
}