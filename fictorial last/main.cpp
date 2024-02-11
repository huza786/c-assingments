#include <iostream>

using namespace std;

int main()
{
double a,b,fact,n;
cout<<"enter digit ";
cin>>a;
fact=1;
b=a;
while(b>1)
{
    fact=fact*b;
    b--;
}
cout<<"factorial is "<<fact;
             return 0;
             }
