#include<iostream>
using namespace std;
int main(){
    int a;
    int *p;

    cout<<"enter a value"<<endl;
    cin>>a;

    p=&a;
    cout<<"the  address value is "<<&a<<endl;
    cout<<"the  address of p is "<<p<<endl;
    cout<<"the value of p  variable "<<*p<<endl;

    return 0;
}