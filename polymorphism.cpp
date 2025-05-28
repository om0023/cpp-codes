#include<iostream>
using namespace std;
class cal  {
    public:
    static int add(int a,int b){
        
        return a+b;
    }

    static int  sum(int c ,int d , int e) {
        
        return c+d+e;
}
};
int main(){
    cal s1;
    cout<<"addition is "<<s1.add(10,20)<<endl;
    cout<<"addition is "<<s1.sum(10,20,30)<<endl;

    return 0;
}