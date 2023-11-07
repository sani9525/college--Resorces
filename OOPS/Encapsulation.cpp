#include <bits/stdc++.h>
using namespace std;

class student {

    private:
    string name;
    int age;
    int height;

     public:
     int getage(){
        return this->age;
     }
     void setage(int n){
        this->age=n;
     }

};
int main (){

    student obj;
    obj.setage(25);

    cout<<obj.getage()<<endl;


    return 0;
}