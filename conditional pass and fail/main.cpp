#include <iostream>

using namespace std;

int main()
{
    float marks;
    cout<<"enter your marks : ";
    cin>>marks;
    cout<<"you are "<<(marks>=40? "pass": "fail");
    return 0;
}
