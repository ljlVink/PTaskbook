# Prompt for chatgpt in pt4 environment

定义一个pt4.h代替stdio,在c语言环境中,需要知道一些函数

输入操作 
| Example | stdio | pt4 |
|-|-|-|
|输入int型|scanf("%d",&int_type)|GetN(&int_type)|
|输入double型|scanf("%f %lf",&float_type,&double_type)|GetD(&only_double_type)|
|输入bool型|-|GetB(&bool_type)|
|输入char**字符**|scanf("%c",&char_type)|GetC(&char_type)|
|输入char**字符串**|scanf("%s",&char_str)|GetS(&char_str)
|获取int矩阵|-|GetMatrN(matr_int,line,row,0)|获取int类型矩阵(仅限新版本PT4生效,第四个参数目前默认为0)|
|获取double矩阵|-|GetMatrD(matr_double,line,row,0)|获取double类型矩阵(仅限新版本PT4生效,第四个参数目前默认为0)|

输出操作

| Example | stdio | pt4 |
|-|-|-|
|输出int型|printf("%d",int_type);|PutN(int_type)|
|输出double型|printf("%f %lf",float_type,double_type)|PutD(only_double_type)|
|输出bool型|-|PutB(bool_type)|
|输出char**字符**|printf("%c",char_type)|PutC(char_type)|
|输出char**字符串**|printf("%s",char_str)|PutS(char_str)|
|输出int矩阵|-|PutMatrN(matr_int,line,row,0)|输出int类型矩阵(仅限新版本PT4生效,第四个参数目前默认为0)|
|输出double矩阵|-|PutMatrD(matr_double,line,row,0)|输出double类型矩阵(仅限新版本PT4生效,第四个参数目前默认为0)|

举个例子。
```c
#include "pt4.h"
double a;
int b;
void Solve()
{
    Task("ZFunc36");
    for(int i=1;i<=2;i++){
        GetD(&a);
        GetN(&b);
        PutD(a);
        PutN(b);
    }
}
```

文件(File)题 操作时会提前给几个文件名，需要用GetS获取文件名之后fopen打开。

在接下来的提问中我会给出题号，如ZMatrix7°,你需要在Task中删掉无用的符号(如°)。并且题目是英语的，要求解释时候要用中文解释.