// This task must be solved with vector<vector<int>>
// or vector<vector<double>> (not an array!)
#include <vector>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("ZMatrix70");
    int m, n;
    pt >> m >> n;
    double mx = -1;
    pair<int, int> pos;
    vector<vector<double>> a, ans;
    for (int i = 0; i < m; i++)
    {
        vector<double> temp;
        for (int j = 0; j < n; j++)
            temp.push_back(GetDouble());
        a.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > mx)
            {
                mx = a[i][j];
                pos.first = i;
                pos.second = j;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (pos.first == i)
        {
            ans.push_back(a[i]);
            ans.push_back(a[i]);
        }
        else
        {
            ans.push_back(a[i]);
        }
    }
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            pt << ans[i][j];
        }
    }
}
