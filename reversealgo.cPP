#include<iostream>
using namespace std;
int main(){
    int n,reverse=0,rem;

    cout<<"enter a value"<<endl;
    cin>>n;

    while(n!=0) { 
    {
       rem=n%10;
       reverse=(reverse*10)+rem;
       n=n/10;
    }
    
   }
   cout<<"reversed number:"<<reverse<<endl;
    return 0 ;
}