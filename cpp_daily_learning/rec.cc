#include <iostream>
using std::cout;
using std::endl;
using std::cin ;
int f(int n);
int main (){
    cout << "intput x: "<<endl;
    int x;
    cin >> x;
    cout<<f(x)<<endl;
    return 0;
}

int f(int n){
    if (n==0){
        return 1;
    }
    else{
        return n*f(n-1);
    }
}