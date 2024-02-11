#include <iostream>

using namespace std;

int main()
{
    char ac;
    cout<<"ENTER YOUR CHARACTER : ";
    cin>>ac;
    if((ac='a')||(ac='b')||(ac='c')||(ac='d')||(ac='e')||(ac='f')||(ac='g')||(ac='h')||(ac='i')||(ac='j')||(ac='k')||(ac='l')||(ac='m')||(ac='n')||(ac='o')||(ac='p')||(ac='q')||(ac='r')||(ac='s')||(ac='t')||(ac='u')||(ac='v')||(ac='w')||(ac='x')||(ac='y')||(ac='z'))
    cout<<" this is a small case character: "<<ac;
   else if((ac='A')||(ac='B')||(ac='C')||(ac='D')||(ac='E')||(ac='F')||(ac='G')||(ac='H')||(ac='I')||(ac='J')||(ac='K')||(ac='L')||(ac='M')||(ac='N')||(ac='O')||(ac='P')||(ac='Q')||(ac='R')||(ac='S')||(ac='T')||(ac='U')||(ac='V')||(ac='W')||(ac='X')||(ac='Y')||(ac='Z'))
    cout<<"THIS IS A LARGE CASE CHARACTER"<<ac;
    else
    cout<<"it is a special case"<<ac;
    return 0;
}

