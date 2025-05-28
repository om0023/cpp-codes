#include<iostream>
using  namespace std;
class Employee{
    private:
    int  empid;
    string empname;
    int empsalary;

    public:
    void setemployeeid(int id){
        empid=id;
    }
    void setempname(string name) {
        empname = name;
    }
    void setemployeesalary(float salary) {
        empsalary = salary;
    }

    int getemployeeid(){
        return empid;
    }

    string getemployeename(){
        return empname;
    }

    int getemployeesalary(){
        return empsalary;
    }
};
int main(){
    Employee s1;
    s1.setemployeeid(101);
    s1.setempname("om");
    s1.setemployeesalary(100000);

    cout<<"employee id"<<s1.getemployeeid()<<endl;
    cout<<"Employee Name "<<s1.getemployeename()<<endl;
    cout<<"Employee salary"<<s1.getemployeesalary()<<endl;

    return 0;
}