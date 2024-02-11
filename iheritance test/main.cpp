#include <iostream>
#include<string>

using namespace std;
class parent
{
protected:
    char str[8];
public :
    void setdata()
    {
        cout<<"enter parent ";
        cin>>str;

    }
    void getdata()
    {
        cout<<"showing parent "<<str<<endl;

    }

};
class child : public parent
{
public:
    void editdata()
    {
        cout<<"enter to edit data "<<endl;
        cin>>str;

    }
    void show()
    {
        cout<<"edited by child is "<<str<<endl;

    }
};
int main()
{
    parent p;
    p.setdata();
    p.getdata();
    child c;

    c.editdata();
    c.show();
    c.setdata();

    return 0;
}
