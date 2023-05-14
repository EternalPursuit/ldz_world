#include <iostream>
#include <vector>
using std::cout;
using std::string;
using std::cin; 
using std::endl;
using std::vector;
int main (){
    string nums[] = {"one","two","three"};
    string * P = nums;
    cout<<"use pointer P to visit the element in nums : "<<endl;
    for (auto item : nums){
        cout<< "now you will see the content in nums : "<<item<<endl;
    }
    cout<<"now is the content for pointer P :"<<endl;
    string * beg = begin(nums);
    string * last = end(nums);
    while (beg!=last){
        cout << "pointer visit content is : "<< *beg <<endl;
        beg++;
    }

    const int ci=0,&cj=ci;
    decltype(cj) y = ci;
    cout<<"the value in y is : "<<y<<endl;

    int cint_1 =20;
    int cint_1_inverse = -cint_1;
    cout<<"the value of cint_1_inverse is : "<< cint_1_inverse<<endl;

    vector<string> text = {"hello"," world",""  , "ldz.","!!!"};
    for (const auto & s : text){
        cout<<s;
        if (s.empty() || s[s.size()-1]=='.'){
            cout<<endl;
        }
        else{
            cout<<" "<<endl;
        }
    }

    cout<<"now is for the circle in ++"<<endl;
    auto pbeg = text.begin();
    while (pbeg!=text.end())
    {
       cout<<  *pbeg++ <<endl; /* code */
    }
    
    double int_num_str = 123.36;
    cout <<"强制类型转换的结果是： "<< static_cast<int> (int_num_str)<<endl;

    //验证后置++和前置++的优先级
    int i_1=0;
    int b_1 = i_1++;
    cout << b_1 <<"i 的 值： "<<i_1<<endl;

    //验证{}的作用域
    int wl_i = 0;
    while (wl_i<10){
        int hah;
        hah=wl_i;
        wl_i++;
    }
    cout << wl_i<<endl;
    if (wl_i<100){
        cout <<"now wl_i xiaoyu 100"<<endl;
    }
    else if (wl_i>10){
        cout<<"now wl_i dayu 10"<<endl;
    }
    else{
        cout << "you have a value between 10 and 100"<<endl;
    }
    int input_num=0;
    cout<<"请输入一个值："<<endl;
    cin>>input_num;
    switch(input_num){
        case 1: cout << "haha"<<endl; cout <<"yes"<<endl; break;
        case 2: cout << "haha"<<endl; cout <<"en"<<endl; break;
        case 3: cout << "haha"<<endl; cout <<"no"<<endl; break;
        default:cout<<"default value is "<<endl;break;
    }
    vector<int> v={1,2,3,4};
    cout<<"请输入一个值： "<<endl;
    while(cin>>input_num){
        v.push_back(input_num);
    }

    decltype(v.begin()) beg_ldz = v.begin();
    while (beg_ldz!=v.end())
    {
        ++beg_ldz;
        cout<<"the value of beg is :"<<*beg_ldz<<endl;
    }

    
}