#include <iostream>

using namespace std;

int main()
{ int gr;
  int sl;
  int sal;
  float tax;
  float bns;
  cout<<"ENTER YOUR GRADE : ";
  cin>>gr;
      if((gr<16)||(gr>21))
     cout<<"invalid entry";
     if((gr>=16)&&(gr<=21))
     {cout<<"ENTER YOUR BASIC SALARY : ";
     cin>>sl;

     if(gr==16||gr==17||gr==18)
     tax=(sl*6/100);
     bns=(sl*8/100);
     sal=sl-tax+bns;
     if((gr==19)||(gr==20))
     tax=(sl*7/100);
     bns=(sl*9/100);
     sal=sl-tax+bns;
     if(gr==21)
     tax=(sl*10/100);
     bns=(sl*15/100);
     sal=sl-tax+bns;}
        cout<<"YOUR TOTAL SALARY IS :"<<sal;

    return 0;
}
