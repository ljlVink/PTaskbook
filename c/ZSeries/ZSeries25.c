// Do NOT use arrays!
#include "pt4.h"
int n,x,flag=0,flag1=0,ans=0,lastans=0;
void Solve()
{
    Task("ZSeries25");
    GetN(&n);
    for(int i=1;i<=n;i++){
        GetN(&x);
        if(x!=0 && flag) ans+=x;
        else if(x==0 && flag) flag=0;
        if(x==0 && !flag){
            flag=1;
            lastans+=ans;
            ans=0;
        }
    }
    if(flag) PutN(lastans);
    else PutN(ans);
}
