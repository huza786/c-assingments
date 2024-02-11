#include <iostream>

using namespace std;

int main()
{
    float length;
    float width;
    cout<<"Enter Length : ";
    cin>>length;
    cout<<"enter width : ";
    cin>>width;
    if(length==width)
    {
    cout<<" it is a square";
    }
    else
        cout<<"it is a rectangle";
    return 0;
}
