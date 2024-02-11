#include <iostream>

using namespace std;

int main()
{
    long int a,b;
    cout<<"enter your character";
    cin>>a;
    b=a-1;
    while(b>0)
    {
     a=(a*b);
b=b-1;
    }cout<<"Factorial is "<<a;
    return 0;
}
