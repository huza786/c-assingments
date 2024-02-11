#include <iostream>

using namespace std;

int main()
{
    char c;
    cout<<"Enter your Character: ";
    cin>>c;
    if(c>=65&&c<=117)
   {
	 if((c==65)||(c==69)||(c==73)||(c==79)||(c==85))

       cout<<"IT IS UPPERCASE VOWEL";

     if((c==97)||(c==101)||(c==105)||(c==111)||(c==117))
	  cout<<"it is a lower case value";}

else
        cout<<"It is neither upper nor lower case vowel";
    return 0;
}

