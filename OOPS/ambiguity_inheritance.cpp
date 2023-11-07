#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int id1;

    public:
    void fun(){
        cout<<"This is called A class"<<endl;
    }
};

class B{
    public:
    int id2;

    public:
    void fun(){
        cout<<"This is Called B Class"<<endl;
    }
};

class C:public A,public B{
    public:
    int name_c;

};
int main (){

     C obj;
     obj.A::fun(); // its called scope resolution operator
     obj.B::fun();

    return 0;
}