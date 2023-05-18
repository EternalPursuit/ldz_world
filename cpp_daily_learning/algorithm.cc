#include <iostream>
using std::cout;
using std::cin ;
using std::endl;
double arc_tan(double x);

int main(){
    double a =16.0*arc_tan(1.0/5.0);
    double b =4.0 *arc_tan(1.0/239.0);
    double pi = a-b;
    cout << pi <<endl;
return 0;

}

double arc_tan(double x){
    double head =x;
    int tail =1;
    double art = 0;
    while (double(head/tail)>1e-15){
        art = (tail%4 == 1)? art + head/tail:art - head/tail;
        head*= x*x;
        tail +=2;
        cout<<"-------------"<<endl;
        cout<<tail<<endl;
        cout<<"-------------"<<endl;
    }
    return art;
}