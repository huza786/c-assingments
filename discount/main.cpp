#include <iostream>

using namespace std;

int main()
{
    float com;
    int bill;
    cout<<"ENTER BILL ";
    cin>>bill;
      if(bill<0)
        cout<<"INVALID ENTRY";
        if(bill>0)
    { if(bill>0&&bill<=999)
        com=0;
      if(bill>=1000&&bill<=2500)
        com=(2.5*bill/100);
      if(bill>2500&&bill<=5500)
        com=(3.5*bill/100);
      if(bill>5500&&bill<=8000)
      com=(4.5*bill/100);
      if(bill>8000&&bill<=10000)
      com=(4.5*bill/100);
      if(bill>10000)
        com=(6.25*bill/100);
      cout<<"YOUR COMISSION IS : "<<com;



        }
    return 0;
}
