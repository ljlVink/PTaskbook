#include "pt4.h"
int a[1005],n,flag=1;
void Solve()
{
    Task("ZArray27");
    GetN(&n);
    for(int i=0;i<n;i++){
        GetN(a+i);
    }
    if(a[0]<0)flag=0;
    for(int i=1;i<n;i++){
        if(i&1){
            if((!flag&&a[i]<0)||(flag&&a[i]>0)){
                PutN(i);
                return;
            }
        }
        else if((!flag&&a[i]>0)||(flag&&a[i]<0)){
            PutN(i);
            return;
        }
    }
    PutN(-1);
    //...
}
