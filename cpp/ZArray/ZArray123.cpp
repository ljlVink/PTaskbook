// This task must be solved with vector<int>
// or vector<double> (not an array!)
#include <vector>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("ZArray123");
    int k, n, cnt = 1;
    vector<int> a;
    vector<pair<int, int>> b;
    pt >> k >> n;
    for (int i = 0; i < n; i++)
        a.push_back(GetInt());
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            cnt++;
        }
        else
        {
            b.push_back({a[i - 1], cnt});
            cnt = 1;
        }
    }
    b.push_back({a[n - 1], cnt});
    if (k < b.size())
    {
        pair<int, int> temp = b[k];
        b[k] = b[0];
        b[0] = temp;
    }
    for (vector<pair<int, int>>::size_type i = 0; i < b.size(); i++)
    {
        for (int j = 0; j < b[i].second; j++)
        {
            pt << b[i].first;
        }
        ShowN(b[i].second);
    }
}
