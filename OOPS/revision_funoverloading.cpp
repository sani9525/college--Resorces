#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void same(int num){
        cout<<num<<endl;
    }

    public:
    void same(char ch){
        cout<<ch<<endl;
    }
};
int main (){
    A obj;
    obj.same(34);
    obj.same('S');

    return 0;
}