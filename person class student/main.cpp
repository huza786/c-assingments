#include <iostream>
using namespace std;
struct D_O_B
{
    int day;
    int month;
    int year;
};
class person
{
protected:
    int id ;
    char name[20];
    char address[20];
    char f_name[20];
    D_O_B dob;
public:
    person()
   {
       cout<<"Enter id: ";
       cin>>id;
       cout<<"Enter name: ";
       cin>>name;
       cout<<"Enter address: ";
       cin>>address;
       cout<<"Enter Father name: ";
       cin>>f_name;
       cout<<"Enter date of birth(dd/mm/yyyy): ";
       cin>>dob.day>>dob.month>>dob.year;
       }
       void show ()
       {
           cout<<"Showing Your personal information "<<endl;
           cout<<"Name: "<<name<<endl;
           cout<<"ID: "<<id<<endl;
           cout<<"Father name: "<<f_name<<endl;
           cout<<"Address: "<<address<<endl;
           cout<<"DOB: "<<dob.day<<"-"<<dob.month<<"-"<<dob.year<<endl;

       }


};
class student : protected person
{
protected:
    int marks;
    int roll_no;
    char grade;

};


int main()
{
    person p;
    p.show();
    return 0;
}
