#include <iostream>
#incldue <cstring>

using namespace std;

class Person{
    public:
        typedef enum{ boy = 0,girl} SexType;
       Person(char *n, int a, SexType s){
        name = new char[strlen(n)+1];
        strcpy(name,n);
        age = a;
        sex = s;
       }

        int get_age() const {return this->age;}
        Person & add_age(int a){
            age+=a;
            return *this;
        }
        ~Person() {delete [] name;}
    private:
        char *name;
        int age;
        SexType sex;
}