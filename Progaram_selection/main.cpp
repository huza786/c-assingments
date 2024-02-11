#include <iostream>

using namespace std;
void ProgramSlc(string stdId){
if((stdId[0]=='b'||stdId[0]=='B')&&(stdId[1]=='C'||stdId[1]=='c'))
{
    cout<<"Bachelor\n";
}
}

int main()
{
    string s ="bc";
    ProgramSlc(s);
    return 0;
}
