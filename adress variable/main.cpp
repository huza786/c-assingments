#include <iostream>

using namespace std;
int swapi(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
    return a;
    return b;
}
int main()
{
    int a,b ;
    cout<<"Enter value";
    cin>>a>>b;
    swapi(a,b);
    cout<<a<<endl<<b<<endl;
    cout<<&a<<endl;
    cout<<&b<<endl;
   int  *ptr=&a;
   cout<<*ptr<<endl;
   cout<<ptr;


    return 0;
}
