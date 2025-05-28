#include<iostream>
using namespace std;
int mul(int , int);
float mul(float, float) ;

int mul(int a,int b){
    return a*b;
};
float mul(double j,double k){
    return j*k;
};

int main(){
    int x=mul(5,3);
    float y=mul(2.7,1.8);
    cout<<"Multiplication of  5 and 3 is "<<x<<endl;
    cout<<"Multiplication of  2.7 and 1.8 is "<<y<<endl;

    return 0;
}