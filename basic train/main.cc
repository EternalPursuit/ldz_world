#include <iostream>
using std::cout;
using std::cin; 
using std::endl;

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

int main (){
    int len=10;
   cout<<"you are using fibonacci func to cal len =10 "<<endl;
  int res=fibonacci(len) ;
    cout << "now you have a value of result is :"<< res<<endl;
    return 0;
}