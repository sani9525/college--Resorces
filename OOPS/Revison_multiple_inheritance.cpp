#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    int id_a;
};

class B{
    public:
    int id_b;
};

class C{
    public:
    int id_c;
};

class Derived: public A,public B,public C{
    public:
    int id_d;
};
int main (){

    Derived obj;

    obj.id_a=45;
    obj.id_b=50;
    obj.id_c=55;
    obj.id_d=60;

    cout<<obj.id_a<<" "<<obj.id_b<<" "<<obj.id_c<<" "<<obj.id_d<<endl;
    return 0;
}