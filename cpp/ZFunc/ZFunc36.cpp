#include "pt4.h"
using namespace std;

void ShiftLeft3(double &a1, double &b1, double &c1)
{
    double tmp = a1;
    a1 = b1;
    b1 = c1;
    c1 = tmp;
}

void Solve()
{
    Task("ZFunc36");
    int T = 2;
    double a1, b1, c1;
    while (T--)
    {
        pt >> a1 >> b1 >> c1;
        ShiftLeft3(a1, b1, c1);
        pt << a1 << b1 << c1;
    }
}
