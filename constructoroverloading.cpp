#include<iostream>
using namespace std;
class add  {
    public:
     add(int a,int b){
        cout<<a+b<<endl;
       
    }

     add(int c ,int d , int e) {
        cout<<c+d+e;
        
}
};
int main(){
    add x=add(5,6);
    add y=add(10,20,30);

    return 0;
}