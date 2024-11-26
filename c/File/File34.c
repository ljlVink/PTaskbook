#include "pt4.h"
#include <stdio.h>
char filename[100];
int a[100];
int plusans[100],cnt,cnt_plus;
void Solve()
{
    Task("File34");
    GetS(filename);
    FILE *fp=fopen(filename,"rb");

    while(fread(&a[cnt],sizeof(int),1,fp)==1){
        if(a[cnt]>=0){
            plusans[cnt_plus++]=a[cnt];
        }
        cnt++;
    }
    fp=fopen(filename,"wb");
    fwrite(plusans,sizeof(int),cnt_plus,fp);
    fclose(fp);
}
