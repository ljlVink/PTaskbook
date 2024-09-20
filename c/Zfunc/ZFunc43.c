// Do NOT use arrays!
#include "pt4.h"
#include <math.h>
int T = 6;
double y, X;
double Ln(double x, double eps){
    double ans=0;
    double tmp=x;
    int n=1;
    while (fabs(tmp)>=eps){
        ans+=tmp;
        tmp*=(-x)*n/(n+1); //拆分做
        n++;
    }
    return ans;
}
void Solve()
{
    Task("ZFunc43");
    GetD(&X);
    while (T--){
        GetD(&y);
        PutD(Ln(X, y));
    }
}
