#include<iostream>
using namespace std;
class account{
    public:
    void display(){
        cout<<"salary has been credited"<<endl;
    }
};
class programmer:public account{
    public:
    void seen(){
        cout<<"i am a good programmer"<<endl;
    }
};
int main(){
    programmer s1;
    s1.display();
    s1.seen();
    return 0;
}