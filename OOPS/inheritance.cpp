#include <bits/stdc++.h>
using namespace std;

class human{

    public:
    int age;
    int weight;
    int height;

    public:
    int getage(){
        return this->age;
    }
    int setweight(int w){
        this->weight=w;
    }

};

class male: public human{
   public:
 string name;

   void access(){
    cout<<"this a child class"<<endl;
   }

};
int main (){
     male obj;
    obj.age=34;
    obj.height=6;
    obj.name="sani Kumar";
    obj.setweight(45);
     cout<<obj.age<<endl;
     cout<<obj.weight<<endl;
     cout<<obj.name<<endl;
    cout<<obj.height<<endl;
    cout<<obj.getage()<<endl;
    obj.access();

    return 0;
}