#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"ENTER NUMBER : ";
    cin>>a;
    if(a==1)
    cout<<"MONDAY";
    if(a==2)
        cout<<"TUESDAY";
    if(a==3)
        cout<<"WEDNESDAY";
    if(a==4)
        cout<<"THURSDAY";
    if(a==5)
        cout<<"FRIDAY";
    if(a==6)
        cout<<"SATURDAY";
    if(a==7)
        cout<<"SUNDAY";
    if(a==0) 
        cout<<"INVALID NUMBER ENTERED";
    if(a>7)
        cout<<"invalid number";


    return 0;
}
