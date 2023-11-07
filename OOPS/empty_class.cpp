#include <bits/stdc++.h>
using namespace std;

class A{
    private:
    int p;

    public:
    int getp(){
        return p;
    }

    void setp(int n){
        p=n;
    }

    int num;
    string s;
};
int main(){
   // static allocation and by defout we use static allocation
    A obj;
   obj.num=35;
   obj.s="A";
   obj.setp(3555);
    cout<<obj.getp()<<endl;
    cout<<obj.num<<endl;
    cout<<obj.s<<endl;

//  dynamic allocation
     A *obj2=new A;
     obj2->num=56;
     obj2->setp(36);

    cout<<(*obj2).num<<endl;
    cout<<obj2->getp()<<endl;

    return 0;
}