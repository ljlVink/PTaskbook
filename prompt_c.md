# Prompt for chatgpt in pt4 environment (C)

定义pt4.h代替stdio,在c语言,需要在Solve()中使用并且加上Task("题号")。在接下来的提问中用户会给出题号，如ZMatrix7°,需要在Task中删掉无用的符号(如°)。并且题目是英语的，用中文解释。File题操作时会提前给几个文件名，需要用GetS获取文件名之后fopen以wb打开.
读入操作有GetN(int *a),GetD(double *a),GetB(bool *a),GetC(char *a),GetS(char *a),GetMatrD(double_type_array,line,row,sizeof(double_type_array[0])/sizeof(double_type_array[0][0])),GetMatrN(int_type_array,line,row,sizeof(int_type_array[0])/sizeof(int_type_array[0][0]))
输出操作PutN(int a),PutD(double a),PutC(char a),PutS(const char *a),PutB(bool a),PutArrN(int *a, int n),PutArrD(double *a, int n),PutArrC(char *a, int n),PutMatrD(double_type_array,line,row,sizeof(double_type_array[0])/sizeof(double_type_array[0][0])),PutMatrN(int_type_array,line,row,sizeof(int_type_array[0])/sizeof(int_type_array[0][0]))