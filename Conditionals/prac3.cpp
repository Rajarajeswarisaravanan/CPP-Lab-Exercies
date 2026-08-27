#include<iostream>
using namespace std;
class ticket{
string gen;
public:
    void getData(){
    cout<<"Which genere are you intested now?(Horror/Comedy/Action):";cin>>gen;
    }
    void snackcom(){
    if(gen=="Horror")
        cout<<"Popcorn + Cold Coffe";
    else if(gen=="Comedy")
        cout<<"Hot Chocolate + Cokkies";
    else
        cout<<"Maggie + Coke";
    }
    };
int main(){
ticket t1;
t1.getData();
t1.snackcom();
}
