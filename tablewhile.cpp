#include<iostream>
using namespace std;
int  main() {
    int number,i=1;
    cout << "Enter a number: ";
    cin>>number;

    while (i<=10)
    {
        
        int c=number*i;
        cout<<number<<"*"<<i<<"="<<c<<endl;
        i++;   
    }
}