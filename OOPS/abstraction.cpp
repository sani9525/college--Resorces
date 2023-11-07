#include <bits/stdc++.h>
using namespace std;
class A{
    private:
    int a;
    int b;

    public:
    void set(int n,int m){
        a=n;
        b=m;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
};
int main (){

    A obj;
    obj.set(6, 10);
    obj.display();

    return 0;
}