#include <iostream>

using namespace std;

int main()
{
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
        cout<<"YOU ARE ELIGIBLE TO SIT IN THE EXAMS!";

    }
    else
    {
        cout<<"SORRY YOU ARE NOT ELIGIBLE TO SIT IN EXAMS!";
    }
    return 0;
}
