#include <iostream>

using namespace std;
void ck_num(long n)
{
 int c,i;
 if(n>0)
{for(i=2;i<n;i++)
 {
     if(n%i==0)
     {
         c=1;
         break;
     }
     if(n%i!=0)
     {
         c=0;
     }


 }   if((n%2==0)&&(c==1))
     {
         cout<<"Entered number is even only";
     }
     else if((n%2!=0)&&(c==1))
     {
         cout<<"entered number is odd only";
     }
     else if((n%2==0)&&(c==0))
     {
         cout<<"Entered number is even and prime";
     }
     else if((n%2!=0)&&(c==0))
     {
         cout<<"Entered number is odd and prime";
     }}
     else
     {
         cout<<"Invalid ";
     }
}
int main()
{   long n;
    cout << "Enter a number: " << endl;
    cin>>n;
    ck_num(n);
    return 0;
}
