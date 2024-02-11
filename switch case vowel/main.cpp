#include <iostream>

using namespace std;

int main()
{
 char c;
 cout<<"Enter character: ";
 cin>>c;
 switch(c)
 {
 case'a':
 case'A':
    cout<<"It is a vowel "<<c;
    break;
 case'E':
 case'e':
    cout<<"It is a vowel "<<c;
    break;
 case'I':
 case'i':
    cout<<"It is a vowel "<<c;
    break;
 case'o':
 case'O':
    cout<<"It is a vowel "<<c;
    break;
 case'U':
 case'u':
    cout<<"It is a vowel "<<c;
    break;
    default:
        cout<<"It is a consonant "<<c;}
    return 0;
}
