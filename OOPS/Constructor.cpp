#include <bits/stdc++.h>
using namespace std;
class A{

    public:
     A(){
        cout<<"constructor called"<<endl;
    }
    public:
    int num;
    char c;
};
int main (){

     A obj;
     A *p=new A;
     obj.num=45;
     cout<<obj.num<<endl;

    return 0;
}