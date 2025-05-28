#include<iostream>
using namespace std;
class animal{
    protected:
    string  nameone;
    public:
    void cat(){
        cout<<"enter ur pet  name"<<endl;
        cin>>nameone;
    }
};
class language :public animal{
    protected:
    string  nametwo;
    public:
    void java(){
        cout<<"enter ur language  name"<<endl;
        cin>>nametwo;
    }
};
class clg  {
    protected:
    string  namethree;
    public:
    void clg1(){
        cout<<"enter ur college  name"<<endl;
        cin>>namethree;
    }
};
class all :public clg,public language{
    public:
    void  show(){
        cat();
        java();
        clg1();

        cout<<"your pet name is"<<nameone<<endl;
        cout<<"your language name is"<<nametwo<<endl;
        cout<<"your college name is"<<namethree<<endl;

    }
};
int main(){
    all s1;
    s1.show();
    return 0;
}