#include <iostream>

using namespace std;

int main()
{
int a,b,i,j,gcd;
cout<<"enter A digit: ";
cin>>a;
cout<<"enter B digit: ";
cin>>b;
j=(a>b)? a:b;//if(a>b){j=a}else{j=b}
while(j>=1)
{if((a%j==0)&&(b%j==0))
    {
       gcd=j;
        cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd;

  break;  }
    j--;
}


    return 0;
}
