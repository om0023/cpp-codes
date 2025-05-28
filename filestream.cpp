#include<iostream>
#include<fstream>
using namespace std;
int main (){
    ofstream filestream("testout.txt");
    if (filestream.is_open()){
        filestream<<"welcome to cpp"<<endl;
        filestream<<"c++ tutorial "<<endl;
        filestream.close();
    }
    else cout<<"file opening is fail";
    return 0;
}