#include <bits/stdc++.h>
using namespace std;

class animal {

    public:
    string name;
    int age;
    int weight;
    string color;

    public:
    void speak(){
        cout<<"This is Animal class which is Speaking"<<endl;
    }

};

class dog: public animal{
    public:
      int id1;
};

class cat: public dog{
    public:
    int id2;

};

class tiger: public cat{
    public:
    int id3;
};
int main (){
    tiger obj;
    obj.speak();
    return 0;
}