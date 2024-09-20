// Do NOT use arrays!
#include "pt4.h"
int x,ans,tmp;
void Solve()
{
    Task("ZFunc28");
    for(int i=1;i<=5;i++){
        GetN(&x);
        ans=0;
        while (x!=0) {
            tmp=x%10; 
            ans=ans*10+tmp;
            x/=10;
        }
        PutN(ans);
    }
}
