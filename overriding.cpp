#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){ 
        cout<<"Eating..."<<endl;
}
};
class man {
    public:
    void eat(){
        cout << "Crying..." << endl;
    }
};
int main(){
    Animal s1= Animal(); //upcasting
    s1.eat( );
    return 0;
}