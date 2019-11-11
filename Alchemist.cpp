// Alchemist
// Resistors in Parallel
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

using namespace std;
int N;

struct data
{
    int reward;
    int days;

public:
    data(int a, int b)
    {
        reward = b;
        days = a;
    }
    bool operator<(data b)
    {
        return this->days < b.days;
    }
};

int main()
{
    //int A[50];
    //int B[50];
    vector<data> vec;

    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int a, b;
        cin >> a >> b;
        vec.push_back(data(a, b));
    }
    std::sort(vec.begin(), vec.end(), [](data a, data b) { return a.days < b.days; });

    std::priority_queue<int> q;

    int score = 0;

    int i = 0;
    for (int j = 1; j <= M; j++)
    {
        for (; i < N && vec[i].days <= j; i++)
        {
            q.push(vec[i].reward);
        }
        if (!q.empty())
        {
            score += q.top();
            q.pop();
        }
    }
    cout << score << endl;
    return 0;
}