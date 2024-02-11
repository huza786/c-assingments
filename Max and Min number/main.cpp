#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,maxi,mini;
    cout<<"ENTER NUMBER A : ";
    cin>>a;
    cout<<"ENTER NUMBER B : ";
    cin>>b;
    cout<<"ENTER NUMBER C : ";
    cin>>c;
    cout<<"ENTER NUMBER D : ";
    cin>>d;
    cout<<"ENTER NUMBER E : ";
    cin>>e;
    {if((a>b)&&(a>c)&&(a>d)&&(a>e))
    maxi=a;
    if((b>c)&&(b>d)&&(b>e))
        maxi=b;
    if((c>d)&&(c>e))
        maxi=c;
    if(d>e)
        maxi=d;
    if((e>d)&&(e>a)&&(e>b)&&(e>c))
        maxi=e;
        cout<<"MAX IS "<<maxi;
        }
        {
            if((a<b)&&(a<c)&&(a<d)&&(a<e))
                mini=a;
            if((b<c)&&(b<d)&&(b<e))
                mini=b;
            if((c<d)&&(c<e))
                mini=c;
                if(d<e)
                mini=d;
            if((e<d)&&(e<a)&&(e<b)&&(e<c))
                e=mini;
                cout<<"MIN IS "<<mini;

        }






    return 0;
}
