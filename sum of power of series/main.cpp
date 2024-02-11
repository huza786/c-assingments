#include <iostream>
#include<math.h>

using namespace std;

int main()
{
   long int a,sum,n,p,b,c;
    cout<<"enter power base : ";
    cin>>a;
    cout<<"Enter power : ";
    cin>>b;
    cout<<"Enter series number : ";
    cin>>n;
    p=pow(a,b);
    c=1;
    sum=n*p;
    cout<<"the sum of "<<a<<" rasied to power "<<b<<" of times "<<n<<" is "<<sum;


    return 0;
}
