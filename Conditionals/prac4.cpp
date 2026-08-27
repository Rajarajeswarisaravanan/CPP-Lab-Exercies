#include<iostream>
using namespace std;
class character{
string name;
int morality_score;

public:
    void getData(){
    cout<<"Name of the Character: ";cin>>name;
    cout<<"Morality Score of the Character: ";cin>>morality_score;
    }
    void reveal(){
    if (morality_score>5)
        cout<<name<<"is a Hero!!";
    else if(morality_score<0)
        cout<<name<<"is a Villian:(";
    else
        cout<<name<<"is a Anti Hero (It's Complicated)";
    }
    };
int main(){
character c1;
c1.getData();
c1.reveal();
}
