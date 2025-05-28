#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"eating.."<<endl;
    }
};
class boy:public animal{
    public:
    void oop(){
        cout<<"fainting.."<<endl;
    }
};
class baby:public boy{
    public:
    void xcv(){
        cout<<"writing.."<<endl;
    }
};
int main(){
    baby s1;

    s1.eat();
    s1.oop();
    s1.xcv();

    return 0;
}