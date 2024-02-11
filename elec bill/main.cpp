#include <iostream>

using namespace std;

int main()
{
    float bill;
    int un;
    float tax;
    float pr;
    cout<<"ENTER YOUR CONSUMED UNITS: ";
    cin>>un;
    if(un<=0)
    cout<<" INVALID ENTRY";
    if (un>=0)
    {
    if(un>0&&un<=100)
    tax=250;
    pr=31.75;
    bill=(un*pr)+tax;
    if(un>100&&un<=150)
    tax=400;
    pr=35.25;
    bill=(un*pr)+tax;
    if(un>150&&un<=200)
    tax=475;
    pr=37.75;
    bill=(un*pr)+tax;
    if(un>200&&un<=250)
    tax=625;
    pr=42.25;
    bill=(un*pr)+tax;
    if(un>250&&un<=300)
    tax=800;
    pr=47.75;
    bill=(un*pr)+tax;
    if(un>300&&un<=380)
    tax=1250;
    pr=56.25;
    bill=(un*pr)+tax;
    if(un>300)
    tax=3540;
    pr=68.24;
    bill=(un*pr)+tax;
    }
    cout<<"the bill is "<<bill;
        return 0;
}
