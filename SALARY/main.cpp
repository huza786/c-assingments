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
  cout<<"enter your salary : ";
  cin>>sl;
  if((gr<16)||(gr>21))
    cout<<"invalid entry";

  if(gr==16||gr==17||gr==18)
     tax=(sl/100)*6);
     bns=(sl/100*8);
     sal=sl-tax+bns;

    if((gr==19)||(gr==20))
        tax=(sl/100*7);
         bns=(sl/100*9);
         sal=sl-tax+bns;
    if(gr==21)
        tax=(sl/100*10);
        bns=(sl/100*15);
        sal=sl-tax+bns;
        cout<<"YOUR SALARY IS :"<<sal;

    return 0;
}
