#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,maximum,minimum;
    cout << "ENTER NUMBER A ";
    cin>>a;
    cout<<"ENTER NUMBER B ";
    cin>>b;
    cout<<"ENTER NUMBER C ";
    cin>>c;
    cout<<"ENTER NUMBER D ";
    cin>>d;
    cout<<"ENTER NUMBER E ";
    cin>>e;
    maximum=a;
    if(b>maximum)
        maximum=b;
    if(c>maximum)
        maximum=c;
    if(d>maximum)
        maximum=d;
    if(e>maximum)
        maximum=e;
    cout<<"MAXIMUM IS "<<maximum<<endl;
    minimum=a;
    if(b<minimum)
        b=minimum;
    if(c<minimum)
        c=minimum;
    if(d<minimum)
        d=minimum;
    if(e<minimum)
        e=minimum;
    cout<<"MINIMUM IS "<<minimum<<endl;



    return 0;
}
