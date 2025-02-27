// This task must be solved with vector<vector<int>>
// or vector<vector<double>> (not an array!)
#include <vector>
#include "pt4.h"
using namespace std;

void Solve()
{
    Task("ZMatrix14");
    int m;
    pt >> m;
    vector<vector<double>> a;
    for (int i = 0; i < m; i++)
    {
        vector<double> temp;
        for (int j = 0; j < m; j++)
        {
            temp.push_back(GetDouble());
        }
        a.push_back(temp);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m - i; j++)
        {
            pt << a[j][i];
        }

        for (int j = i + 1; j < m; j++)
        {
            pt << a[m - i - 1][j];
        }
    }
}
