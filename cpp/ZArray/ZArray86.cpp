#include "pt4.h"
#include <bits/stdc++.h>
using namespace std;

void Solve()
{
    Task("ZArray86");
    int N, K;
    pt >> N;
    vector<double> arr;
    for (int i = 0; i < N; i++)
        arr.push_back(GetDouble());
    pt >> K;
    rotate(arr.begin(), arr.begin() + K, arr.end());
    pt << arr;
}
