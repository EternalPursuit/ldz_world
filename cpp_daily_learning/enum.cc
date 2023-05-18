#include <iostream>
using std::cout;
using std::endl;


enum weekday { s,mt,w,thu,f,s1};
typedef enum weekday en_wek;

int main(){
   en_wek wek =s;
   for (int i =0; i!=f; i++) {
    cout<<i<<endl;
    cout <<en_wek(wek+i)<<endl;
    cout << "------哈哈-------"<<endl;
   }
    return 0;
}