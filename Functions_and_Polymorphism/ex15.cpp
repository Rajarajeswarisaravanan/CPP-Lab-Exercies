#include<iostream>
using namespace std;
class LifeJourney
{

public:
    virtual void journey()
    {

        cout<<"Every life is a journey."<<endl;
    }
};
class Service:public LifeJourney{
public:
    void journey()
    {

    cout<<"Service:Live by helping others."<<endl;
    }
    };
class Knowledge:public LifeJourney{
public:
    void journey()
    {
    cout<<"Knowledge:Seek truth and use it wisely."<<endl;
    }
    };
class Comapssion:public LifeJourney
{

public:
    void journey()
    {

        cout<<"Compassion:Let love guide your action."<<endl;
    }
};
int main()
{

    Service service;
    Knowledge knowledge;
    Comapssion comapssion;

    LifeJourney*path;
    path=&service;
    path->journey();

    path=&knowledge;
    path->journey();

    path=&comapssion;
    path->journey();

    cout<<"In the end every journey returns to God."<<endl;
    return 0;

}
