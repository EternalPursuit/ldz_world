/* 联合体学习.cpp */
#include <iostream>
using namespace std;
//相同的内存地址
union myun {
  struct {
    int x;
    int y;
    int z;
  } u;
  int k;
} a;

union ldz_struct
{
    char x;
    int i;
    double j;   /* data */
};


int main() {
  a.u.x = 4;
  a.u.y = 5;
  a.u.z = 6;
  a.k = 0; //覆盖掉第一个int空间值
  printf("%d %d %d %d\n", a.u.x, a.u.y, a.u.z, a.k);

  ldz_struct ldz_var;
  ldz_var.x=8;
  ldz_var.i=90;
  cout<<"the value of ldz_var.x is: "<<ldz_var.x<<endl;
  cout<<"the value of ldz_var.i is: "<<ldz_var.i<<endl;

  
  return 0;
}