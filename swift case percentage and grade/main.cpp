#include <iostream>

using namespace std;

int main()
{
float phy,chem,bio,eng,urdu,math,percentage;
cout<<"Enter physics numbers : ";
cin>>phy;
cout<<"Enter chemistry numbers : ";
cin>>chem;
cout<<"Enter biology numbers : ";
cin>>bio;
cout<<"Enter english numbers : ";
cin>>eng;
cout<<"Enter urdu numbers : ";
cin>>urdu;
cout<<"Enter math numbers : ";
cin>>math;
percentage=((phy+chem+bio+eng+urdu+math)/600)*100;
cout<<"your percentage is : "<<percentage;




    return 0;
}
