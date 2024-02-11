#include <iostream>

using namespace std;

int main()
{int ch;
int a;
char c;
cout<<"1. character to ascii\n2.acii to character\nEnter your choice";
cin>>ch;
switch (ch)
{ case 1:
    cout<<"Enter your number ";
cin>>a;
cout<<"Your character is "<<char(a);
break;
case 2:
cout<<"Enter your character ";
 cin>>c;
 cout<<"your number is "<<int(c);
 break;
 default:
        cout<<"Invalid";}






    return 0;
}
