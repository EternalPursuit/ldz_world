/*
用于对函数指针的使用
*/


#include <iostream>
using std::cout;
using std::endl;

void myfunc(int num1,int num2){
    cout << "the sum of num1 and num2 is : "<< num1+num2<<endl;
}

int fibonacci(int num){
    int a = 0;
    int b = 1;
    for(int i =0;i<num;i++)
    {
        int tmp = b;
        b=a+b;
        a=tmp;
    }
    return b;
}
void myfunc1(int num1, int num2){
    cout << "the result of num1 multi num2 is : "<<num1*num2<<endl;
}

typedef int  (*fun1)(int);
typedef void (*fun)(int,int);



int main () {
    fun ldz_func = myfunc;
    fun1 ldz_fibonacci=fibonacci;
    int ldz_fibo=ldz_fibonacci(2);
    cout<<"the result of ldz_fibo is : "<<ldz_fibo<<endl;
    ldz_func(1,2);
    ldz_func = myfunc1;
    ldz_func(2,4);
}