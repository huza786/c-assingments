#include <iostream>

using namespace std;
struct student
{    char name[20];
    int rno;
    float avg,marks;

}stud;
int main()
{
     cout<<"Enter roll no: ";

      cin>>stud.rno;
      cout<<"enter Name: ";
      cin>>stud.name;
      cout<<"name: "<<stud.name<<endl;
      cout<<"roll no : "<<stud.rno;

    return 0;
}
