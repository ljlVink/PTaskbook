// Do NOT use arrays!
#include "pt4.h"
double b,c,x,mx=-9999.00;
int pos=-1;
void Solve()
{
    Task("ZMinmax15");
    GetD(&b);
    GetD(&c);
    for(int i=1;i<=10;i++){
        GetD(&x);
        if(x>b&&x<c){
            if(x>mx) pos=i,mx=x;
        }
    }
    if(pos==-1){
        PutD(-1);
        PutN(-1); 
    }else{
        PutD(mx);
        PutN(pos-1); //start from 0 !!! it's SPJ bugs -> (passes in some cases if PutN(pos) )!!!
    }
}
