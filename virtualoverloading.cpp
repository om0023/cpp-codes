#include <iostream>
using namespace std;
class shape{
     public:
     virtual void draw(){
        cout<<"drawing.."<<endl;
     }
};
class rectangle : public shape{
    public:
    void draw(){
        cout<< "this is a rectangle"<<endl;
    }
};
class circle : public shape {
    public :
    void  draw() {
        cout<<" this is a circle";
    }
};
int main(){
    shape *s;
    shape s1;
    rectangle s2;
    circle s3;
    s=&s1;
    s->draw();

    s=&s2;
    s->draw ();

    s=&s3;
    s->draw();

    return 0;

}
