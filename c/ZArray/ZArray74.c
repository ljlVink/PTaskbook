#include "pt4.h"
int n,lst,fst,tag;
double a[1005],mx=-9999,mn=9999;
double Max(double a,double b){return a>b?a:b;}
double Min(double a,double b){return a<b?a:b;}
void Solve()
{
    Task("ZArray74");
    GetN(&n);
    for(int i=0;i<n;i++){
        GetD(a+i);
        if(a[i]>mx){mx=a[i];lst=i;}
        if(a[i]<mn){mn=a[i];fst=i;}
    }
    for(int i=0;i<n;i++){
        if((lst>fst&&i>fst&&i<lst)||(lst<fst&&i<fst&&i>lst)){
            PutD(0);
        }
    
        else PutD(a[i]);
    }
    
    //...
}
