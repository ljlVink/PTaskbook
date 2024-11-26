#include "pt4.h"
#include <stdio.h>
double a,d;
char filename[100];
double ans[100];
void Solve()
{
    Task("File3");
    GetS(filename);
    FILE *fp=fopen(filename,"wb");
    GetD(&a);
    GetD(&d);
    for(int i=0;i<10;i++){
        ans[i]=a+i*d;
    }
    fwrite(ans, sizeof(double), 10, fp);
    fclose(fp);
}
