#include <iostream>

using namespace std;

int main()
{
 char c,p;
 cout<<"Enter your character :";
 cin>>c;
 if((c=='A')||(c=='E')||(c=='I')||(c=='O')||(c=='U'))
 cout<<"it is a upper case";
  else if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
     cout<<"it is a lower case";
  else
    cout<<"it is neither upper nor lower case vowel";
     return 0;
}
