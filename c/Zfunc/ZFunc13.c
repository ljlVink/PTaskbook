#include "pt4.h"
#include "stdbool.h"
#include <string.h>

int b[10010];
int anss[10010];

void Init(int N){
    memset(b,1,sizeof(b));
    b[0]=0;
    b[1]=1;
    for(int i=2;i<=N;i++){
        if(b[i]){
            anss[i]=1;
            for(int j=2;i*j<=N;j++){
                b[i*j]=0;
            }
        }
    }

}

bool IsPrime(int a){
    return anss[a];
}
int a,ans=0;
void Solve()
{
    Task("ZFunc13");
    Init(1000);
    int T=10;
    while(T--){
        GetN(&a);
        ans+=IsPrime(a);
    }
    PutN(ans);
}
