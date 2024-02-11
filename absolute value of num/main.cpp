#include <iostream>

using namespace std;

int main()
{
 int input;
 cout<<"enter number : ";
 cin>>input;
 if(input<0)
    input=(-1)*input;
 else
 {
     input=(input);

 }
 cout<<"ABSOLUTE VALUE IS "<<input;
    return 0;
}
