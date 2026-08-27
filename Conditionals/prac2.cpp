#include<iostream>
using namespace std;
class Show{
int seatbooked;
int totalseats;
public:
    void getData(){
    cout<<"Enter Total Available Seats:";cin>>totalseats;
    cout<<"Enter Total Number of Seats Booked:";cin>>seatbooked;
    }
    void review(){
    int per=(seatbooked/totalseats)*100;
    if(per>80)
        cout<<"Percentage ->"<<"Houseful";
    else if(per>=80)
        cout<<"Percentage ->"<<"Decent Crowd";
    else
        cout<<"Percentage ->"<<"Flop Show";
}
};
int main(){
Show s1;
s1.getData();
s1.review();
}

