// Do NOT use arrays!
#include "pt4.h"
int a=0;
double ans=1;
void Solve()
{
    Task("ZFunc20");
    int T=5;
    
    while(T--){
        GetN(&a);
        ans=1;
        if(a&1){
            for(int i=1;i<=a;i+=2)ans*=i;
        }else{
            for(int i=2;i<=a;i+=2)ans*=i;
        }
        PutD(ans);
    }
}
