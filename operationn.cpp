#include<iostream>
using namespace std;
int main() {
    int a,c;
    cout<<"enter a value of a"<<endl;
    cin>>a;
    

    c=++a;
    cout<<"increament is "<<c<<endl;
    c=--a;
    cout<<"decreament is "<<c<<endl;
    c=a++;
    cout<<"post increament is "<<c<<endl;
    c=a--;
    cout<<"post decrement is "<<c<<endl;
}