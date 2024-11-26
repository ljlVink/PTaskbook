# PTaskbook_smbu

[`c/python` answers.](https://github.com/ljlVink/PTaskbook/)

## 目录

[前言](#前言)

[`PT4`与(在线提交/线下控制台的区别)](#pt4与在线提交线下控制台的区别)

[不同语言下使用PT4](#不同语言下使用pt4)

- [C语言下使用PT4](#c语言下使用pt4)

- [Python下使用PT4](#python下使用pt4)

- [PT4调试技巧](#PT4调试技巧)

### 前言

本仓库仅为保存做题代码，**请勿直接复制粘贴到你的源代码中**

### `PT4`与(在线提交/线下控制台的区别)：

1.标准输入输出需要用PT4自带的函数，并且C语言部分差异较大

2.编译之后需要生成的`ptprj.exe`会调用`pt4`运行

3.不支持mingw-w64(seh)编译，需要使用mingw-w64(sjlj)，或者TDM-GCC (devc自带)，并在编译时加入`-w32`参数(pt4是32位程序)

4.评测机为本地运行，并且数据完全交给`SPJ`，而且SPJ随机构造的数据强度**非常低**并且只有5-10组。

5.只支持windows系统，其他系统可以用wine试试。

## 不同语言下使用PT4

### C语言下使用PT4

~~0.编译(如果使用vscode或devc可跳过)~~

powershell

```
cmd /c TDM-GCC路径 -Wall -m32 -mwindows -std=c99 .\ZFunc10.c .\pt4.c -o ptprj.exe ;./ptprj
```

1.`I/O` 操作

输入操作 

| Example | stdio | pt4 |备注|
|-|-|-|-|
|输入int型|scanf("%d",&int_type)|GetN(&int_type)|一次只能读入一个数据|
|输入double型|scanf("%f %lf",&float_type,&double_type)|GetD(&only_double_type)|只有double|
|输入bool型|-|GetB(&bool_type)|-|
|输入char**字符**|scanf("%c",&char_type)|GetC(&char_type)|只是字符(未遇到此类题型，待定)|
|输入char**字符串**|scanf("%s",&char_str)|GetS(&char_str)|字符串类型(未遇到此类题型，待定)|
|获取int矩阵|-|GetMatrN(matr_int,line,row,0)|获取int类型矩阵(仅限新版本PT4生效,第四个参数目前默认为0)|
|获取double矩阵|-|GetMatrD(matr_double,line,row,0)|获取double类型矩阵(仅限新版本PT4生效,第四个参数目前默认为0)|

输出操作

| Example | stdio | pt4 |备注|
|-|-|-|-|
|输出int型|printf("%d",int_type);|PutN(int_type)|一次只能输出一个数据|
|输出double型|printf("%f %lf",float_type,double_type)|PutD(only_double_type)|只有double|
|输出bool型|-|PutB(bool_type)|-|
|输出char**字符**|printf("%c",char_type)|PutC(char_type)|只是字符(未遇到此类题型，待定)|
|输出char**字符串**|printf("%s",char_str)|PutS(char_str)|字符串类型(未遇到此类题型，待定)|
|输出int矩阵|-|PutMatrN(matr_int,line,row,0)|输出int类型矩阵(仅限新版本PT4生效,第四个参数目前默认为0)|
|输出double矩阵|-|PutMatrD(matr_double,line,row,0)|输出double类型矩阵(仅限新版本PT4生效,第四个参数目前默认为0)|

### Python下使用PT4

-1.PT4自动生成的是pyw文件。

0.运行
```
python 题目.pyw
```

1.`I/O` 操作

输入操作

python下没有官方教程，以下仅为阅读python下的PT4代码得到

| Example | 标准io | pt4 |备注|
|-|-|-|-|
|输入int型|x=int(input())|x=get_int()|一次只能读入一个数据|
|输入double型|x=float(input())|x=get_float()|python中用float|
|输入bool型|-|x=get_bool()|-|
|输入char**字符**|-|-|没有|
|输入char**字符串**|x=str(input())|x=get_str()|字符串类型(未遇到此类题型，待定)|

以下为python特性的特殊输入操作，慎用
| Example | 标准io | pt4 |备注|
|-|-|-|-|
|万能get|x=input()|x=get()|支持任何参数|
|一次get2个|-|x,y=get2()|支持任何参数|
|一次get3个|-|x,y=get3()|支持任何参数|
|一次get4个|-|x,y=get4()|支持任何参数|
|一次get5个|-|x,y=get5()|支持任何参数|
|获取list|-|x=get_list(n = 10)|获取一个list|
|获取矩阵|-|get_matr(m = 10, n= 10)|获取一个矩阵|

输出操作

| Example | 标准io | pt4 |备注|
|-|-|-|-|
|输出int型|print(x)|put(x)|万能输出|
|输出double型|print(x)|put(x)|万能输出|
|输出bool型|print(x)|put(x)|万能输出|
|输出char**字符串**|print(x)|put(x)|万能输出|

## PT4调试技巧

略
