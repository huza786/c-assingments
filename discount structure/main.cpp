#include <iostream>
# define n 3
using namespace std;
struct bil
{
     float com;
    int bill;
};
int main()
{ bil b[n];

   for(int i=0;i<n;i++)
   {  b[i].bill=0;
        cout<<"ENTER BILL ";
       cin>>b[i].bill;


      if(b[i].bill>0&&b[i].bill<=999)
        {b[i].com=0;}
      else if(b[i].bill>=1000&&b[i].bill<=2500)
        {b[i].com=(2.5*b[i].bill/100);}
      else if(b[i].bill>2500&&b[i].bill<=5500)
        {b[i].com=(3.5*b[i].bill/100);}
      else if(b[i].bill>5500&&b[i].bill<=8000)
        {b[i].com=(4.5*b[i].bill/100);}
      else if(b[i].bill>8000&&b[i].bill<=10000)
        {b[i].com=(4.5*b[i].bill/100);}
      else if(b[i].bill>10000)
       {b[i].com=(6.25*b[i].bill/100);}
      else
        {cout<<"INVALID ENTRY"<<endl;}
        {if(b[i].bill>0){ cout<<"YOUR COMISSION IS : "<<b[i].com;
       cout<<endl;}}
        }


        return 0;
}
