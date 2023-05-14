#include <iostream>
#include "func.h"
using std::cout;
using std::cin; 
using std::endl;
using std::string;


size_t count_calls(){
    static size_t count_num =0;
    return ++count_num;
}

void array_op(const int *array_ldz,int size){
   for (int i = 0; i < size ; i++) {
    cout<<"the value of P is :"<<*array_ldz<<endl;
    array_ldz+=1;
   }

}

int fibonacci(int length){
    int a =0;
    int b=1;
    for (int i =0; i<length;i++){
        int tmp = a;
        a=b;
        b= tmp+b;
    }
    return b;
}