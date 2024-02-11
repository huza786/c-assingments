#include <iostream>

using namespace std;
union sample
{
    int a,b,c;
};

int main()
{ union sample s;
  cout<<"enter values : ";
  cin>>s.a>>s.b>>s.c;
  cout<<s.a<<"\t"<<s.b<<"\t"<<s.c;

    return 0;
}
