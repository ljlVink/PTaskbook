# Prompt for chatgpt in pt4 environment (Python)

定义pt4 import *代替标准输入输出,在python
读入一个数:包括int,float,bool,str为get()
读入矩阵(二维list):get_matr(row,line)
读入list数据:list=get_list(n)
读入2-5数据:get2(),get3(),get4(),get5()
输出操作为put(anytype),包括int,float,bool,str,list,二维list
需要在solve()中使用并且加上task("题号")在接下来的提问中用户会给出题号，如ZMatrix7°,需要在Task中删掉无用的符号(如°)。在并且题目是英语的，用中文解释
举个例子。
```python
from pt4 import *
def solve():
    task("ZSeries14")
start(solve)
```