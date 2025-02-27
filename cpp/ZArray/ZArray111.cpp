// This task must be solved with vector<int>
// or vector<double> (not an array!)
#include <vector>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("ZArray111");
    int N;
    pt >> N;
    vector<int> a, b;
    for (int i = 0; i < N; i++)
        a.push_back(GetInt());
    for (int i = 0; i < N; i++)
        if (a[i] & 1)
        {
            b.push_back(a[i]);
            b.push_back(a[i]);
            b.push_back(a[i]);
        }
        else
            b.push_back(a[i]);
    for (auto i : b)
        pt << i;
}
