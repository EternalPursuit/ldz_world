#include <iostream>
using std::cout;
using std::cin ;
using std::endl;
using std::string;

int whole_num = 1;

class MyClass{
    public:
    string my_name;
    static string unique_class; 

    public:
        static int add_ldz(int num1,int num2){
            return num1 + num2;
        }
};

string MyClass::unique_class = "gaosan";

int main(){

    MyClass ldz;
    int res = MyClass::add_ldz(1,2);
    cout << "the res is : "<<res<<endl;
    
    int res_1 = ldz.add_ldz(1,2);
    cout << "the res_1 is : "<<res<<endl;

    cout<<"the static name in Myclass is: "<<ldz.unique_class<<endl;

    ldz.my_name="123";
    cout<<"the value of my_name is : "<< ldz.my_name <<endl;

    static int a;
    int b= -10;
    int c =0;
    void  other(void);
    cout<<"---MAIN---\n";
    cout<<"whole_num: "<<whole_num << "a: "<<a<<"b: "<<b<<"c: "<<c<<endl;
    c = c+8;
    other();

    cout<<"---MAIN---\n";
    cout<<"whole_num: "<<whole_num << "a: "<<a<<"b: "<<b<<"c: "<<c<<endl;

    whole_num+=10;
    other();
    other();
    return 0;
}


void other(void){
    static int a =2;
    static int b;
    int c =10;
    a= a+2;
    whole_num+=32;
    c+=5;
    cout<<"---other---\n";
    
    cout<<"whole_num: "<<whole_num << "a: "<<a<<"b: "<<b<<"c: "<<c<<endl;
    b=a;
}