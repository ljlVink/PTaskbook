// Do NOT use arrays!
#include "pt4.h"
int n;
double x,ans=0;
void Solve(){
    Task("ZSeries5");
    GetN(&n);
    for(int i=1;i<=n;i++){
        GetD(&x);
        PutD((double)((int)x));
        ans+=(double)((int)x);
    }
    PutD(ans);
}