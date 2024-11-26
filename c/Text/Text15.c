#include "pt4.h"
#include <stdio.h>
int n,k,len;
char filename[100];
char str[100][100];
void Solve()
{
    Task("Text15");
    GetN(&n);
    GetS(filename);
    FILE *fp=fopen(filename,"rb");
    while(fgets(str[k],sizeof(str),fp)!=NULL){
        len=strlen(str[k]);
        ShowLineC(str[k][len-1]);
        if(len>1){
            str[k][len-1]='\0';
        }
        k++;

    }
    fclose(fp);
    fp=fopen(filename,"wb");
    for(int i=0;i<k;i++){
        if(i==n)continue;
        fprintf(fp,"%s\n",str[i]);
    }
    fclose(fp);
}
