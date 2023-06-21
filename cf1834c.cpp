#include<bits/stdc++.h>
using namespace std;
void help()
{
    int n;
    string s,t;
    cin>>n;
    cin>>s>>t;
    int ct1=0;
    int ct2=0;
   for(int i=0;i<n;i++)
   {
       if(s[i]!=t[i])
       {
           ct1++;
       }
   }
   reverse(t.begin(),t.end());
   for(int i=0;i<n;i++)
   {
       if(s[i]!=t[i])
       {
           ct2++;
       }
   }
   reverse(t.begin(),t.end());
   if(!ct1)
   {
       cout<<0<<endl;
   }
   else if(!ct2)
   {
       cout<<2<<endl;
   }
   else{
       cout<<min(2*ct1-(ct1%2),2*ct2-(!(ct2%2)))<<endl;
   }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        help();
    }
    return 0;
}