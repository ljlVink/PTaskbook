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
    {
        int val = GetInt();
        if (val & 1)
        {
            a.push_back(val);
            a.push_back(val);
            a.push_back(val);
        }
        else
        {
            a.push_back(val);
        }
    }
    pt << a;
}
