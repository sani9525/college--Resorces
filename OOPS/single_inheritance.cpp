#include <bits/stdc++.h>
using namespace std;
class animal{
    public:
    string name;
    int size;
    int weight;
    string color;

    public:
    void speak(){
        cout<<"Animal is Speaking"<<endl;
    }
};

class dog: public animal{
    public:
    int id;

};
int main (){

    dog d;
    d.speak();
    d.name="kutta";

    cout<<d.name<<endl;

    return 0;
}