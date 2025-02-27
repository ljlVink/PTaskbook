# Prompt for chatgpt in pt4 environment (CPP)


定义pt4.h代替std::cin和std::cout,在c语言,需要在Solve()中使用并且加上Task("题号")。在接下来的提问中用户会给出题号，如ZMatrix7°,需要在Task中删掉无用的符号(如°)。并且题目是英语的，用中文解释。
读写操作统一由cin/cout改成pt.在并且题目是英语的，用中文解释
以下是举例
```cpp
#include <vector>
#include "pt4.h"
using namespace std;
void Solve()
{
    Task("ZArray86");
    int N,K;
    double x;
    vector<double> arr,temp;
    pt>>N;
    for(int i=0;i<N;i++){
        pt>>x;
        arr.push_back(x);
    }
    pt>>K;
    for (int i = 0; i < K; ++i) {
        temp.push_back(arr[i]);
    }
    for (int i = 0; i < N - K; ++i) {
        arr[i] = arr[i + K];
    }
    for (int i = 0; i < K; ++i) {
        arr[N - K + i] = temp[i];
    }
    for(auto x:arr){
        pt<<x;
    }
}
```
