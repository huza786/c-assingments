#include <iostream>

using namespace std;

int main()
{
    char c;
    cout<<"Enter your character: ";
    cin>>c;
    if((c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126))cout<<"it is special";
    if(c>47&&c<=57)cout <<"it is a digit"<<c;
    if(c>64&&c<=90)cout<<"it is a uppercase"<<c;
    if(c>=97&&c<=122)cout<<"it is a lower case"<<c;

    return 0;
}
