/*#include "pt4.h"
#include <stdlib.h>
#include <string.h>
char filename[100];
char filename1[100];
char line [9999+5];
int intNum[10000];
int cnt_int=0,i=0;
void Solve()
{
    Task("Text49");
    GetS(filename);
    GetS(filename1);
    while (fread(&intNum[cnt_int], sizeof(int), 1, fp1) == 1) {
        cnt_int++;
    }
    fclose(fp1);
    fp1=fopen(filename,"w");
    while (fgets(line, 9999, fp) != NULL) {
        ShowLineS("hi");
        line[strcspn(line, "\n")] = '\0';
        if (i < cnt_int) {
            fprintf(fp1,"%s %d\n",line,intNum[i]);
            ShowLineN(intNum[i]);
            i++;
        }
    }
    fclose(fp);

}
*/
#include "pt4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char filename[100];
char filename1[100];

void Solve() {
    Task("Text49");
    GetS(filename);    
    GetS(filename1);
    FILE *textFile = fopen(filename, "r+");
    FILE *binaryFile = fopen(filename1, "rb");
    int num;
    int binaryNumbers[100];
    int i = 0;
    while (fread(&num, sizeof(int), 1, binaryFile) == 1) {
        binaryNumbers[i++] = num;
    }
    fseek(textFile, 0, SEEK_SET);
    char lines[100][1024];
    int lineCount = 0;
    while (fgets(lines[lineCount], sizeof(lines[lineCount]), textFile) != NULL) {
        lines[lineCount][strcspn(lines[lineCount], "\n")] = '\0';
        lineCount++;
    }
    freopen(filename, "w", textFile);
    for (int j = 0; j < lineCount; j++) {
        if (j < i) {
            fprintf(textFile, "%s%d\n", lines[j], binaryNumbers[j]);
        } else {
            fprintf(textFile, "%s\n", lines[j]);
        }
    }
    fclose(textFile);
    fclose(binaryFile);
}
