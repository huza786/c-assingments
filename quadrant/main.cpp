#include <iostream>

using namespace std;

int main()
{
int a,b;
cout<<"enter your quadrant numbers ";
cin>>a>>b;
if(a>0&&b>0)
    cout<<"THE POINTS "<<a<<" "<<b<<" lies in 1st Quadrant";
else if(a<0&&b>0)
    cout<<"THE POINTS "<<a<<" "<<b<<" lies in 2nd Quadrant";
else if(a<0&&b<0)
    cout<<"THE POINTS "<<a<<" "<<b<<" lies in 3rd Quadrant";
else
    cout<<"THE POINTS "<<a<<" "<<b<<" lies in 4th Quadrant";




    return 0;
}
