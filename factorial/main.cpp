#include <iostream>

using namespace std;

int main()
{
int a,b=1,n;
cout<<"Enter : ";
cin>>n;
b=n;


while(b>0&&b<=n)
{b--;
a=a*b;
    --b;
}cout <<"fictorial of "<<n<<"is"<<a;
    return 0;
}
