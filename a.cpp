#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,k=0,m=0,n=0;
    cin>>j;
    string a;
    cin>>a;
   for(i=0;i<j;i++)
   {
       if(a[i]=='A')
       {
           m++;
       }
     else if(a[i]=='D')
       {
           n++;
       }

   }
  // cout<<m<<n;
   if(m<n)
   {
       cout<<"Danik"<<endl;
   }
    else if(m>n)
   {
       cout<<"Anton"<<endl;
   }
    else if(m==n)
   {
       cout<<"Friendship"<<endl;
   }

    return 0;
}

