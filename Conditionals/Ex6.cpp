#include <iostream>
using namespace std;
class Hero{
string name;
int powerlevel;
public:
void getData(){
cout<<"Enter hero name:";cin>>name;
cout<<"Powerlevel(1-10) :";cin>>powerlevel;
}
void rankHero(){
cout<<name<<"->";
if (powerlevel<=3)
    cout<<"Street Level"<<endl;
else if(powerlevel<=6)
    cout<<"City Level"<<endl;
else if(powerlevel<=9)
    cout<<"Planet Level"<<endl;
else
    cout<<"Thanos-snap level"<<endl;
}
 };
int main(){
Hero h1;
h1.getData();
h1.rankHero();
return 0;
}
