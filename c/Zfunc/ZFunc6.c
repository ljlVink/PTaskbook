#include "pt4.h"
#include "stdio.h"
int a,b,c,ans;
void Solve() 
{
    Task("ZFunc6");
    GetN(&a); //get a
    GetN(&b); //get b
    GetN(&c); //get c
    for(int i=a;i<=b;i++)ans+=i;
    PutN(ans);
    ans=0;
    for(int i=b;i<=c;i++)ans+=i;
    PutN(ans);
    return;
}
