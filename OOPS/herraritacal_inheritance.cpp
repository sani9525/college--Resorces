#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int name;
    int size;
};

class B:public A{
    public:
    int id_b;

};

class C:public A{
    public:
    int id_c;
};

int main (){
    B obj1;
    C obj2;

    obj1.name=35;
    cout<<obj1.name<<endl;

    return 0;
}