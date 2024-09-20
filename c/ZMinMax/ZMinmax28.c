// Do NOT use arrays!
#include "pt4.h"
int n,x,len=0,ans=0,st=-1,mxst=-1;
void Solve()
{
    Task("ZMinmax28");
    GetN(&n);
    for(int i=0;i<n;i++){
        GetN(&x);
        if(x){
            if(!len){
                st=i;
            }
            len++;
        }else{
            if(len>ans){
                ans=len;
                mxst=st;
            }
            len=0;
        }
    }
    if(len>mxst){
        mxst=st;
        ans=len;
    }
    PutN(mxst);
    PutN(ans);
}
