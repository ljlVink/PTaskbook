#include "pt4.h"
char filename[100];
char filename1[100];
int a[1000],b[1000],cnt=0,cnt1=0;
void Solve()
{
    Task("File47");
    GetS(filename);
    GetS(filename1);
    FILE *fp,*fp1;
    fp=fopen(filename,"rb");
    fp1=fopen(filename1,"rb");
    FILE *fp_out,*fp1_out;
    while(fread(&a[cnt],sizeof(int),1,fp)){
        cnt++;
    }
    while(fread(&b[cnt1],sizeof(int),1,fp1)){
        cnt1++;
    }
    fclose(fp);
    fclose(fp1);
    
    fp_out=fopen(filename,"ab");
    fwrite(b,sizeof(int),cnt1,fp_out);
    fclose(fp_out);
    fp1_out=fopen(filename1,"ab");
    fwrite(a,sizeof(int),cnt,fp1_out);
    fclose(fp1_out);
    //顺序!!
}
