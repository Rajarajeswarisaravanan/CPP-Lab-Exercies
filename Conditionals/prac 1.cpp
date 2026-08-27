#include<iostream>
using namespace std;
class collector{
int stone;
public:
    void getData(){
    cout<<"Number of stones you got:";cin>>stone;
    }
    void stonesFound(){
    switch(stone){
        case 0:
        case 1:
        case 2:
            cout<<"Still searching"<<endl;
            break;
        case 3:
        case 4:
        case 5:
            cout<<"Getting close"<<endl;
            break;
        case 6:
            cout<<"Snap Ready!"<<endl;
            break;
        default:
            cout<<"There are only 6 stone bruh!"<<endl;
            }
            }
            };
int main(){
collector c1;
c1.getData();
c1.stonesFound();
return 0;
}
