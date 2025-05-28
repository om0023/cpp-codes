#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    char operation;

    cout<<"enter a operation"<<endl;    
    cin>>operation;

    cout<<"enter a first number"<<endl;
    cin>>a;

    cout<<"enter a second number"<<endl;
    cin>>b;

    switch (operation)
    {
       
    case '+':
     
     cout<<"addition is "<<a+b<<endl;
    break;

    case '-':
    c=a-b;
    cout<<"subtraction is "<<c<<endl;
    
    case '*':
    c=a*b;
    cout<<"multiplication is "<<c<<endl;
    default:
    cout<<"error";
    
    break;
    }
    
}