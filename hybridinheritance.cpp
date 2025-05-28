#include <iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void get_a(){
        cout<<"enter the value a"<<endl;
        cin>>a;
    }
};
class B:public A{
    protected:
    int b;
    public:
    void get_b(){
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
};
class C{
    protected:
    int c;
    public:
    void get_c(){
        cout<<"enter  the value of c"<<endl;
        cin>>c;
    }
};
class D:public B, public C{
    protected:
    int d;
    public:
    void mul(){
        get_a();
        get_b();
        get_c();
        
        cout<<"multiplication of given numbers"<<a*b*c<<endl; 
    }
};
int main(){
    D s1;
    s1.mul();
    return 0;
}