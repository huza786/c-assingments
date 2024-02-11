#include <iostream>

using namespace std;

int main()
{
    int marks;
    char grade='A+,A,B,C,D,F';
    cout<<"ENTER YOUR MARKS : ";
    cin>>marks;
    if(marks<0||marks>=100)
    cout<<"INVALID ENTRY";
    if(marks>=0&&marks<=100)
    {
     if(marks>=0&&marks<33)
        grade='F';
     if(marks>=33&&marks<=50)
        grade='D';
     if(marks>50&&marks<=60)
        grade='C';
     if(marks>60&&marks<=70)
        grade='B';
     if(marks>70&&marks<=85)
        grade='A';
     if(marks>85&&marks<=100)
        grade='A+';
        cout<<"YOUR GRADE IS "<<grade;

    }
    return 0;
}
