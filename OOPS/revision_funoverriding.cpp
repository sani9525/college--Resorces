#include <bits/stdc++.h>
using namespace std;
class parent{
    public:
    void fun(){
        cout<<"This is parent class"<<endl;
    }
};

class sub1:public parent{
    public:
    void fun(){
        cout<<"This is sub1"<<endl;
    }
};

class sub2:public parent{
    public:
    void fun(){
        cout<<"This is sub2"<<endl;
    }
};

int main (){
    sub1 obj1;
    sub2 obj2;

    obj1.fun();
    obj2.fun();
    return 0;
}