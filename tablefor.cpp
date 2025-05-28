#include<iostream>
using namespace std;
int main() { 
    int number;
    cout << "Enter a any number: ";
    cin>>number;

    for (int i=1;i<=10; i++)
    {
        int c=i*number;
        cout<<c<<endl;
    }
    
    
}