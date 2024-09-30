# Prompt for chatgpt in pt4 environment (Python)

定义一个pt4代替库python的标准输入输出,在python环境中,需要知道一些函数
| Example | 标准io | pt4 |备注|
|-|-|-|-|
|输入int型|x=int(input())|x=get_int()|一次只能读入一个数据|
|输入double型|x=float(input())|x=get_float()|python中用float|
|输入bool型|-|x=get_bool()|-|
|输入char**字符**|-|-|没有|
|输入char**字符串**|x=str(input())|x=get_str()|字符串类型(未遇到此类题型，待定)|

以下为python特性的特殊输入操作
| Example | 标准io | pt4 |备注|
|-|-|-|-|
|get|x=input()|x=get()|支持任何参数|
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

举个例子。
```python
from pt4 import *
def solve():
    task("ZSeries14")
    k=get_int()
    float_type=get_float()
    ans=0
    while 1:
        x=get_int()
        if x==0:break
        if x<k:ans+=1
    put(ans)
    put(float_type)

start(solve)
```
在接下来的提问中我会给出题号，如ZMatrix7°,你需要在Task中删掉无用的符号(如°)。并且题目是英语的，要求解释时候要用中文解释.


