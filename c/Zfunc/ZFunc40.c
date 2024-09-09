// Do NOT use arrays!
#include "pt4.h"
#include <math.h>
int T=6;
double tmp,y,x;
double Exp(double x,double eps){
    double ans=1.0;
    tmp=1.0;
    for(int i=1;;i++){
        tmp*=(x/i);
        if(tmp<eps)break;
        ans+=tmp;
    }
    return ans;
}
void Solve()
{
    Task("ZFunc40");
    GetD(&x);
    while(T--){
        GetD(&y);
        PutD(Exp(x,y));
    }
}
