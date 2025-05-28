#include<iostream>
using namespace std;
class B{
 int a=4;
 int b=5;
    public:
    int mul(){
        int c=a*b;
        
        return c;
    }
};

    class b:private B{
        public:
        void display(){
            int result=mul();
            cout<<"multiplication of two numbers"<<result<<endl;
        }    
    };

    int main(){
        b s1;
        s1.display();
        return 0;
    }

