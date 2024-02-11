#include <iostream>

using namespace std;
int cube_sum(int a,int b)
{return((a*a*a)+(b*b*b));

}
int main()
{   int a,b;
    int s=0;
    int(*ptr)(int,int)=&cube_sum;
    cout<<"enter two values";
    cin>>a>>b;
    s=ptr(a,b);
    cout<<"Sum of Cubes is "<<s;
    return 0;
}
