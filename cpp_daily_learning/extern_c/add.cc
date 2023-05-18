#include <iostream>
extern "C"{
    #include "add.h"
    }
using std::cout;
using std::endl;


int main (){
    int res = add_ldz(1,2);
    cout <<" the result of add_ldz is : "<<res <<endl;
    return 0;
}
