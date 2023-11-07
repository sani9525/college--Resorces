#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    unsigned int id_a;
    string name_a;
};

class B:public A{
    public:
    unsigned id_b;
    string name_b;
};
int main (){

    B obj;

    obj.id_a=45;
    obj.id_b=90;
    obj.name_a="This is Class A object";
    obj.name_b="This is class B Object";

    cout<<obj.name_b<<" : "<<obj.id_b<<endl;
    cout<<obj.name_a<<" : "<<obj.id_a<<endl;
    return 0;
}