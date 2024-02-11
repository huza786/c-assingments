#include <iostream>
#define n 2

using namespace std;
struct salary
{   char name[20];
    int nsal;
    int bsal;
    float tax;
    float bns;
};

int main()
{salary s[n];
for(int i=0;i<n;i++)
{   cout<<"Enter your name : ";
    cin>>s[i].name;
    cout<<"Enter your salary: ";
    cin>>s[i].bsal;
    if((s[i].bsal>=0)&&(s[i].bsal<=45000))
        {s[i].tax=(s[i].bsal*6/100);
        s[i].bns=(s[i].bsal*5/100);
        s[i].nsal=s[i].bsal+s[i].bns-s[i].tax;}
    else if((s[i].bsal>=45000)&&(s[i].bsal<=55000))
        {s[i].tax=(s[i].bsal*7/100);
        s[i].bns=(s[i].bsal*6/100);
        s[i].nsal=s[i].bsal+s[i].bns-s[i].tax;}
    else if(s[i].bsal>=55000)
       {s[i].tax=(s[i].bsal*8/100);
        s[i].bns=(s[i].bsal*7/100);
        s[i].nsal=s[i].bsal+s[i].bns-s[i].tax;}

}
for (int i=0;i<n;i++)
{
    cout<<"Name: "<<s[i].name<<endl;
    cout<<"Your salary is "<<s[i].nsal<<endl;
}

    return 0;
}
