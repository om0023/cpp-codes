#include<iostream>
using namespace std;
class shape
{
    public:
    int a;
    int  b;
    void get_data(int n,int m)
    {
        a=n;
        b=m;
    }
};
class recatangle :public shape
{
    public:
    int rect_area()
    {
        int result =a*b;
        return result;
    }
};
class Triangle : public shape
{
    public:
    int triangle_area ()
    {
        float result=0.5*a*b;
        return result;
    }
};
int main(void)
{
    recatangle r;
    Triangle t;
    int length,bredth,base,height;
    cout<<"enter a breadth  and length for rectangle\n";
    cin>>length>>bredth;
    r.get_data(length,bredth);
    int m = r.rect_area();
    cout << "Area of the rectangle is : " <<m<<endl; 
    cout << "Enter the base and height of the triangle: " << endl;
    cin >> base >> height;
    t.get_data(base,height);
    int n = t.triangle_area();
    cout << "The area of the triangle is : " << n << endl;    
    return 0;
}