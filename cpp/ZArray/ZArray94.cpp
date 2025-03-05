#include <vector>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("ZArray94");
    int n;
    pt >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int value = GetInt();
        if (i & 1)
            a.push_back(value);
    }
    pt << a;
}
