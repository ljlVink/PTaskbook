#include "pt4.h"
#include "stdbool.h"
int a;
bool IsSquare(int K){
    for(int i=1;K>0;i+=2)K-=i;
    return K==0;
}
int ans=0;
void Solve()
{
    Task("ZFunc10");
    for(int i=1;i<=10;i++){
        GetN(&a);
        ans+=IsSquare(a);
    }
    PutN(ans);
}
