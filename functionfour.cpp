#include<iostream>
using namespace std;
int sum(int n1, int n2) {
    return(n1 + n2);
}
int main(){
    int a ,b;
    cin>>a;
    cin>>b;

    cout<<"sum of two number is "<<a+b<<endl;

    sum(a,b);
    return(a+b);
    
}