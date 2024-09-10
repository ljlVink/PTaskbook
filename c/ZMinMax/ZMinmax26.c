// Do NOT use arrays!
#include "pt4.h"
int n,x,cnt,maxcnt=-1;
int Max(int a,int b){return a>b?a:b;}
void Solve()
{
    Task("ZMinmax26");
    GetN(&n);
    for(int i=1;i<=n;i++) {
        GetN(&x);
        if(!(x&1)) cnt++;
        else {
            maxcnt=Max(cnt,maxcnt);
            cnt=0;
        }
    }
    maxcnt=Max(cnt,maxcnt);
    PutN(maxcnt);
}
