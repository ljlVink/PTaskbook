// This task must be solved with vector<int>
// or vector<double> (not an array!)
#include <vector>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("ZArray86");
    int N, K;
    pt >> N;
    vector<double> arr, temp;
    for (int i = 0; i < N; i++)
    {
        arr.push_back(GetDouble());
    }
    pt >> K;
    for (int i = 0; i < K; ++i)
    {
        temp.push_back(arr[i]);
    }
    for (int i = 0; i < N - K; ++i)
    {
        arr[i] = arr[i + K];
    }
    for (int i = 0; i < K; ++i)
    {
        arr[N - K + i] = temp[i];
    }
    for (auto x : arr)
    {
        pt << x;
    }
}
