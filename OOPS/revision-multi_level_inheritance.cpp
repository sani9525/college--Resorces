#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int id_a;
};

class B: public A{
    public:
    int id_b;

};

class C:public B{
    public:
    int id_c;

};
int main (){

    C obj;
    obj.id_a=4;
    obj.id_b=8;
    obj.id_c=12;

    cout<<obj.id_a<<" "<<obj.id_b<<" "<<obj.id_c<<endl;

    return 0;
}