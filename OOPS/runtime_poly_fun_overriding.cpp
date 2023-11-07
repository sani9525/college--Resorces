#include <bits/stdc++.h>
using namespace std;

class A{

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class B: public A{

    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main (){

    B obj;

    obj.speak();



    return 0;
}