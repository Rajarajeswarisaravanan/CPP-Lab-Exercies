#include<iostream>
using namespace std;
class Relationship
{

public:
    virtual void showHealthyBehaviour()
    {
        cout<<"Helathy relationships need respect."<<endl;
    }
};
class Friendship:public Relationship{
public:
    void showHealthyBehaviour()
    {
    cout<<"Friendship:Trust,listen,and respect boundaries."<<endl;
    }
    };
class Family:public Relationship
{

public:
    void showHealthyBehaviour()
    {

        cout<<"Family:Communicate with care and responsibility"<<endl;
    }
};
class Teamwork:public Relationship
{

public:
    void showHealthyBehaviour()
    {

        cout<<"Teamwork:Copoperate,listen and share responsiblity."<<endl;
    }
};
int main()
{

    Friendship friendRelation;
    Family familyRelation;
    Teamwork teamworkRelation;

    Relationship*relation;

    relation=&friendRelation;
    relation->showHealthyBehaviour();
    relation=&familyRelation;
    relation->showHealthyBehaviour();
    relation=&teamworkRelation;
    relation->showHealthyBehaviour();

    return 0;

}
