#include <iostream>
#include "func.h"
using std::cout;
using std::cin; 
using std::endl;


int main(){
    int func_nums = 0;
    int op_ldz[6];
    while (func_nums<100){
        func_nums = count_calls();
        cout<<"you are using while now "<<func_nums<<endl;
    }
    int word;
    for (int i =0;i<6;i++){
        cout<<"请输入一个数："<<endl;
        cin >> word;
        op_ldz[i]=word;
    }
    array_op(op_ldz,6);


}

//编译的命令是g++ main.cc ./src/func.cc -I./include -o main