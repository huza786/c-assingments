#include <iostream>

using namespace std;

class student
{public:

    char name[20];
    int r_no;
    char f_name[20];

 private:

    float fee;
    float marks;

    void getdata(char name,int r_no,char f_name,float fee,float marks);
    void showdata()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<<r_no<<endl;
        cout<<"Father name: "<<f_name<<endl;
        cout<<"Fee: "<<fee;
        cout<<"MARKS : "<<marks;
    }


};
void student ::getdata(char name,int r_no,char f_name,float fee,float marks)
{
    fee=fee1;
    marks=marks1;

}
{

}

int main()
{  getdata('Huzaifa',41,'murshad karamat',4200,89);
show data;

    return 0;
}
