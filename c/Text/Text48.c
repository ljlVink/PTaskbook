#include "pt4.h"
#include <string.h>
#include <stdio.h>
char filename[100];
char filename1[100];
double temp;
char str[100];
char value[100];
void Solve()
{
    Task("Text48");
    GetS(filename);
    GetS(filename1);
    FILE *fp=fopen(filename,"rb"),*fp1=fopen(filename1,"wb");
    while (fgets(str, sizeof(str), fp) != NULL) {
        char *ptr = str;
        int n;
        while (*ptr != '\0') {
            if (sscanf(ptr, "%s%n", value, &n) == 1) {
                if (strchr(value, '.') == NULL) {
                    int intValue = atoi(value);
                    fwrite(&intValue, sizeof(int), 1, fp1);
                }
                ptr += n;
            } else {
                ptr++;
            }
        }
    }
    fclose(fp);
    fclose(fp1);
}
