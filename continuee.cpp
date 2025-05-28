#include <iostream>
using namespace std;
int main()
{
    int i=1,j=1;
    for (i=1;i<=5; i++)
    {
       for (j=1;j<=5;j++)
       {
        if (i==3&&j==3)
        {
            continue;
        }
        cout<<i<<" "<<j<<endl;
        
       }
       
    }
    

}