// Do NOT use arrays!
#include "pt4.h"
int n,x,ans=0;
void Solve()
{
    Task("ZSeries8");
    GetN(&n);
    for(int i=1;i<=n;i++){
        GetN(&x);
        if(!(x&1)){PutN(x);ans++;}
    }
    PutN(ans);
}
