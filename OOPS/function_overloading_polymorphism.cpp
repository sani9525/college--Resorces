#include <bits/stdc++.h>
using namespace std;

// this function overloading with different no. of argument
class A{
    public:
    void fun(){
        cout<<"fun is 1"<<endl;
    }

    public:
    void fun(int n){
        cout<<n<<endl;
    }

};

// this function overloading with different types of argument
class B{
    public:
    void fun(char c){
        cout<<"fun is 1 "<<c<<endl;
    }

    public:
    void fun(int n){
        cout<<n<<endl;
    }

};

// defout type of argument
class C{
    public:
    void fun(char c,int a,int d,int p){
        cout<<"fun is 1 "<<c<<endl;
    }

};

int main (){
    A obj;
    obj.fun();

    return 0;
}