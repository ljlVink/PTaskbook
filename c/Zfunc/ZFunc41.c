// Do NOT use arrays!
#include "pt4.h"
#include <math.h>
int T = 6;
double tmp, y, X;
double Sin(double x, double eps){
    double ans=0.0;
    tmp=x;
    for (int i=1;fabs(tmp)>=eps;i++){
        ans+=tmp;
        tmp*=-x*x/((2*i)*(2*i+1)); //拆分做
    }
    return ans;
}
void Solve()
{
    Task("ZFunc41");
    GetD(&X);
    while (T--){
        GetD(&y);
        PutD(Sin(X, y));
    }
}
