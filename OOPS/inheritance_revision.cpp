#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    int id;
    string name;
};

class B: public A{
    public:
    int id_b;
};
int main(){
    B obj;

    obj.id=34;

    cout<<obj.id<<endl;
    return 0;
}