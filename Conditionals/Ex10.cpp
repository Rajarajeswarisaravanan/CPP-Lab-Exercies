#include<iostream>
using namespace std;
class offer{
string company;
float ctc;
public:
    void getData(){
    cout<<"Enter company name:";cin>>company;
    cout<<"CTC (in laksh): ";cin>>ctc;
    }
    void reaction(){
    cout<<company<<"offer:Rs."<<ctc<<"LPA->";
    if(ctc<4)
        cout<<"Decent Start"<<endl;
    else if(ctc<10)
        cout<<"Solid Offer!"<<endl;
    else
        cout<<"Bro's Set for Life!"<<endl;
    }
};
int main(){
offer o1;
o1.getData();
o1.reaction();
return 0;
}
