#include "pt4.h"
double a[1005];
int n;
void swap(double *a,double *b){
    double tmp=*a;
    *a=*b;
    *b=tmp;
}
void print_(){
    for(int i=0;i<n;i++){
        PutD(a[i]);
    }
}
void Solve()
{
    Task("ZArray113");
    GetN(&n);
    for(int i=0;i<n;i++){
        GetD(a+i);
    }
    for(int i=n-1;i>0;i--){
        int idx=0;
        for(int j=1;j<=i;j++){
            if(a[j]>a[idx]){
                idx=j;
            }
        }
        swap(&a[i],&a[idx]);
        print_();
    }
}
