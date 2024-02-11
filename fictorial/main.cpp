#include <iostream>

using namespace std;

int main()
{
long int a,b;
cout<<"Enter value ";
cin>>a;
b=1;
while(b!=0&&b<=a)

{a=b*a;
b=b+1;

}
cout<<"fictorial is "<<a;

    return 0;
}
