#include <iostream>
using namespace std;
class Com{
float real,imag;
public:
    Com(float r=0,float i=0){
    real=r;
    imag=i;
    }
    Com add(com c2) {
    Com temp;
    temp.real=real+c2.real;
    temp.imag=imag+c2.imag;
    }
    };
    int main(){
    Com c1(2.5,3.0);
    Com c2(1.5,4.0);
    Com c3=c1.add(c2);
    cout<<"Sum =";
    c3.display():
    return 0:
        }
