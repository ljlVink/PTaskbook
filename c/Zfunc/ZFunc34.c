// Do NOT use arrays!
#include "pt4.h"
double a,b,c;
int T=2;
void Swap(double *A,double *B){
    double tmp=*A;
    *A=*B;
    *B=tmp;
}
void Solve()
{
    Task("ZFunc34");
    while(T--){
        GetD(&a);
        GetD(&b);
        GetD(&c);
        if(a>b)Swap(&a,&b);
        if(b>c)Swap(&b,&c);
        if(a>b)Swap(&a,&b);
        PutD(c);
        PutD(b);
        PutD(a);
    }

}
