#include <iostream>

using namespace std;

int main()
{   char c;
    float class_held;
    float class_attended;
    float percentage;
    cout<<"Enter classes held ";
    cin>>class_held;
    cout<<"Enter classes attended ";
    cin>>class_attended;
    percentage = 100*(class_attended/class_held);
    cout<<"your Percentage is "<<percentage<<endl;
    if(percentage>=75)
    {
        cout<<"YOU ARE ELIGIBLE TO SIT IN THE EXAMS!"<<endl;

    }
    else
    {
        cout<<"SORRY YOU ARE NOT ELIGIBLE TO SIT IN EXAMS!"<<endl;
    }
    if(percentage<75)
    cout<<"do you have a medical cause ? ";
    cin>>c;
    if(c=='Y')
        cout <<"YOU ARE ELIGIBLE TO SIT IN THE EXAMS!";
    else if(c=='N')
        cout<<"YOU ARE NOT ELIGIBLE TO SIT IN THE EXAMS!";

    return 0;
}
