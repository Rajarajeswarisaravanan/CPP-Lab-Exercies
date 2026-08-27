#include <iostream>
using namespace std;
class Ride{
string destination;
float distancekm;
public:
    void getData(){
        cout<<"Enter destination:";cin>>destination;
        cout<<"Distrance (Km) :"; cin>>distancekm;
    }
    void showFare(){
        float fare;
        if(distancekm<=2)
            fare=30;
        else if(distancekm<=5)
            fare=30+(distancekm-2)*12;
        else
            fare=30+3*12+(distancekm-5)*15;
        cout<<"Fare to"<<destination<<"("<<distancekm<<"km): Rs."<<fare<<endl;
    }
    };
    int main(){
    Ride r1;
    r1.getData();
    r1.showFare();
    return 0;
    }
