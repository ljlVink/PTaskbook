#include "pt4.h"
using namespace std;

void Solve()
{
    Task("String28");
    string S, ans;
    char C;
    pt >> C >> S;
    for (char ch : S)
    {
        if (ch == C)
        {
            ans.append(2, C);
        }
        else
            ans.append(1, ch);
    }
    pt << ans;
}
