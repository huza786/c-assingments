#include <iostream>
#define n 3
using namespace std;
char gr(float c)
{
    if(c<0||c>=100)
    {cout<<"INVALID ENTRY";
    }
   else if(c>=0&&c<=100)
    {
     if(c>=0&&c<33)
        return'F';
     else if(c>=33&&c<=50)
        return 'D';
     else if(c>50&&c<=60)
        return 'C';
     else if(c>60&&c<=70)
        return 'B';
     else if(c>70&&c<=85)
        return 'A';
     else if(c>85&&c<=100)
        return 'A+';
}}
float avg(int marks[])
{float t_marks=0;
   float avg_marks;

   for(int i=0;i<n;i++)
   {  t_marks=t_marks+marks[i];

   }
   avg_marks=(t_marks/n);
   return avg_marks;
}

int main()
{int marks[n];
 float c;
 cout<<"Enter marks out of 100: ";
 for(int i=0;i<n;i++)

    {cin>>marks[i];
    if((marks[i]<0)||(marks[i]>100))
    {
        cout<<"Invalid";
        break;
    }
    }
  c= avg(marks);

  cout<<"average is "<<c<<endl;
   gr(c);
   cout<<"Your grade is"<<gr(c);
    return 0;
}
