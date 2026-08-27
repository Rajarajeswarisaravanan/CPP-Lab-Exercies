#include <iostream>
using namespace std;
class Employee{
string name;
float basic,allowance,salary;
public:
    void getData(){
    cout<<"Enter name:";cin>>name;
    cout<<"Enter basic pay:";cin>>basic;
    allowance=basic*0.2;
    salary=basic+allowance;
    }
    void display(){
    cout<<name<<"\tSalary:"<<salary<<endl;
    }
    };
    int main(){
    const int N=3;
    Employee emp[N];
    for (int i=0;i<N;i++){
        cout<<"Employee"<<i+1<<endl;
        emp[i].getData();
    }
    cout<<"\n----Salary Report---"<<endl;
    for(int i=0;i<N;i++){
        emp[i].display();
    }
    return 0;
    }
