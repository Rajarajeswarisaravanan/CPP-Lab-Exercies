#include <iostream>
using namespace std;
class weekend{
int poc_mon;
int ene_lvl;

public:
    void getData(){
        cout<<"Enter your Pocket Money (Minimum 1000 bruh): ";cin>>poc_mon;
        cout<<"Enter your Energy Level (1-10): "; cin>>ene_lvl;
    }
    void plan(){
    if (poc_mon<1000 && ene_lvl<4)
        cout<<"Netflix and sleep";
    else if(poc_mon>=1000)
        cout<<"Outing";
    else
        cout<<"Just chill at Hostel";
        }
};

int main(){
weekend w1;
w1.getData();
w1.plan();
}

