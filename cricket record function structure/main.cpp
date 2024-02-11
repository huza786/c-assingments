#include <iostream>
#include<conio.h>
#include<iomanip>
#define n 1
using namespace std;
struct player
{
    char name[20];
    int run;
    int inn;
    float average;

};
void star()
{
    for(int i=1;i<40;i++)
    {
        cout<<"**";
    }
    cout<<endl;
}
void score()
   {for(int i=1;i<40;i++)
    {
        cout<<"__";
    }
    cout<<endl;
}
void content()
{
    cout<<setw(13)<<"Index   Player"<<setw(13)<<"Runs"<<setw(18)<<"Innings"<<setw(18)<<"Average"<<endl;

}
void input ()
{
    player arr[n];
    for(int i=0;i<n;i++)
{   cout<<(i+1)<<endl;
    cout<<"Enter PLAYER NAME: ";
    cin>>arr[i].name;
    cout<<"Enter RUNS: ";
    cin>>arr[i].run;
    cout<<"Enter Innings played: ";
    cin>>arr[i].inn;
    arr[i].average=((arr[i].run)/(arr[i].inn));

}cout<<setw(40)<<"CRICKITER'S TABLE"<<endl;
star();
content();
score();
for(int i=0;i<n;i++)
{
    cout<<setw(2)<<(i+1)<<setw(13)<<arr[i].name<<setw(13)<<arr[i].run<<setw(18)<<arr[i].inn<<setw(18)<<arr[i].average;
    cout<<endl;
}star();
cout<<setw(40)<<"FINISH"<<endl;
score();
}


int main()
{input();




    return 0;
}
