#include "pt4.h"
char filename[5][100];
int a[3][100],cnt;
void Solve()
{
    Task("Text41");
    GetS(filename[0]);
    GetS(filename[1]);
    GetS(filename[2]);
    FILE *fp=fopen(filename[0],"rb");
    while(fread(&a[0][cnt],sizeof(int),1,fp)==1){
        cnt++;
    }
    fclose(fp);
    fp=fopen(filename[1],"rb");
    for(int i=0;i<cnt;i++){
        fread(&a[1][i],sizeof(int),1,fp);
    }
    fclose(fp);
    fp=fopen(filename[2],"rb");
    for(int i=0;i<cnt;i++){
        fread(&a[2][i],sizeof(int),1,fp);
    }
    fclose(fp);
    GetS(filename[3]);
    fp=fopen(filename[3],"wb");
    for(int i=0;i<cnt;i++){
        fprintf(fp,"|%-20d%-20d%-20d|\n",a[0][i],a[1][i],a[2][i]);
        
    }
    fclose(fp);
}
