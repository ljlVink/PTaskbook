// This task must be solved with vector<int>
// or vector<double> (not an array!)
#include <vector>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("ZArray94");
    int n, x;
    pt >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
        a.push_back(GetInt());
    for (int i = 1; i < n; i += 2)
        b.push_back(a[i]);
    for (auto i : b)
        pt << i;
}
