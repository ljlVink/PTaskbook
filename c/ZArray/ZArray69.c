#include "pt4.h"
int n,lst,fst,tag;
double a[1005];
void swap(double *a,double *b){
    double tmp=*a;
    *a=*b;
    *b=tmp;
}
void Solve()
{
    Task("ZArray69");
    GetN(&n);
    for(int i=0;i<n;i++){
        GetD(a+i);
    }
    for(int i=0;i<n;i+=2){
        swap(&a[i],&a[i+1]);
    }
    for(int i=0;i<n;i++){
        PutD(a[i]);
    }
    
    //...
}
