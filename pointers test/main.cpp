#include <iostream>

using namespace std;

int main()
{
    int a ;
    cout<<"Enter value";
    cin>>a;
    int* pt=&a;
    cout<<a<<endl;
    cout<<pt<<endl;
    cout<<*pt;
    return 0;
}
