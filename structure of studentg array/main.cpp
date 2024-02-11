#include <iostream>
#define n 2
using namespace std;
struct stud
{
    int marks=100;
    char stu_name[10];
    float phy_marks,chem_marks,math_marks;
    float perc;
    char grade;

};
int main()
{

stud st[n];
for(int i=0;i<n;i++)
{cout<<"Enter Name: ";
cin>>st[i].stu_name;
cout<<"Enter marks in Physics: ";
cin>>st[i].phy_marks;
cout<<"Enter marks in Chemistry: ";
cin>>st[i].chem_marks;
cout<<"Enter marks in Maths: ";
cin>>st[i].math_marks;
st[i].perc=((st[i].chem_marks+st[i].math_marks+st[i].phy_marks)/3);

 if((st[i].perc>=0)&&(st[i].perc<33))
{
    st[i].grade='F';

}else if((st[i].perc>33)&&(st[i].perc<=50))
{
    st[i].grade='D';
}else if((st[i].perc>50)&&(st[i].perc<=70))
{
    st[i].grade='C';
}else if((st[i].perc>70)&&(st[i].perc<=80))
{
    st[i].grade='B';

}
else if((st[i].perc>80)&&(st[i].perc<=100))
{st[i].grade='A';}cout<<endl;

}
for(int i=0;i<n;i++)
{
    cout<<"Student Result is as Below:\n";
cout<<"Name: "<<st[i].stu_name<<endl;
cout<<"Physics= "<<st[i].phy_marks<<endl;
cout<<"Chemistry = "<<st[i].chem_marks<<endl;
cout<<"Maths = "<<st[i].math_marks<<endl;
cout<<"Pecentage = "<<st[i].perc<<endl;
cout<<"Grade = "<<st[i].grade<<endl;
if(st[i].grade=='F')
{
    cout<<"Sorry You have failed\nBetter luck next time "<<endl;
}
}
 return 0;
}
