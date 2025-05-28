#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your marks : ";
    cin>>num;

    if (num<0 || num >100)
    {
       cout << "Invalid input!";

    }
    else if ( num<80)
    {
        cout<<"u have b grade";

    }
    else if (num >=80 && num <= 100)
    {
        cout<<"u have a grade";
    }
    return 0;

      
    
}