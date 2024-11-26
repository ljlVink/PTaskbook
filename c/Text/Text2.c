#include "pt4.h"
#include <stdio.h>
char filename[100];
int n;
void Solve()
{
    Task("Text2");
    GetS(filename);
    GetN(&n);
    FILE *fp=fopen(filename,"wb");
    for(int i='a';i<'a'+n;i++){
        for(int j='a';j<=i;j++){
            fprintf(fp,"%c",j);
        }
        fprintf(fp,"\n");
    }
    fclose(fp);
}
