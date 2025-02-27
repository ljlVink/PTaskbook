#include "pt4.h"
using namespace std;

void Solve()
{
    Task("String11");
    string str, ans;
    pt >> str;
    for (auto it = str.begin(); it != str.end(); ++it)
    {
        ans.append(1, *it);
        if (it + 1 != str.end())
        {
            ans.append(" ");
        }
    }
    pt << ans;
}
