#include <bits/stdc++.h>
using namespace std;

class A{

    public:
    int fun1(int n){

        return n*5;
    }
    private :
    int fun2(int n){
        return 5;
    }

};
int main(){
    A obj;
    int p=obj.fun1(3);

    cout<<p<<endl;
    // cout<<obj.fun2(4);

    return 0;

}