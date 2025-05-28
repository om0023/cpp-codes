#include<iostream>
using namespace std;
int main() {
    bool result;
    int a,b;
    
    cin>> a;
    cin>> b;
 
    result= a==b;
    cout<<"a==b = "<<result<<endl;

    result =a<b;
    cout<<"a<b = "<<result<<endl;

    result =a>b;
    cout << "a>b = "<<result<<endl;


}