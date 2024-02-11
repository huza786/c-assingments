#include <iostream>

using namespace std;

int main()
{
   int i,j,k,l,m,n,o,p,q,r,s,rows,t,u,v;
   rows=7;s=4;r=1;q=7;o=1;
   i=1;j=1;k=1;l=1;
   for(i=1;i<=rows;i++)
   { if(((r<=rows)&&(q>=1)&&(o<=rows)))
       {while(j<=o)
       {
           while(k<=o)
           {
               while(l<=o)
               {
                   for(m=1;m<=q;m++)
                   {
                       cout<<" ";
                   }
                   cout<<"*";
                   for(n=2;n<=r;n++)
                   {
                       cout<<" ";
                   }cout<<"*";
                   for(p=1;p<=q;p++)
                   {
                       cout<<" ";
                   }cout<<"*";
                   for(t=2;t<=r;t++)
                   {
                       cout<<" ";

                   }
                   q--;

            l++;
               }cout<<"*";
               k++;
           }cout<<"\n";
           q--;
           j++;}
       }


       o++;

       r++;}

    return 0;
}
