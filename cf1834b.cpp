#include<bits/stdc++.h>
using namespace std;
void help()
{
       string s;
        string t;
        cin>>s;
        cin>>t;
        int l=s.size();
        int r=t.size();
        if(r>l)
        {
            int ans=t[0]-'0'+9*(r-1);
            cout<<ans<<endl;
        }
        else{
            for(int i=0;i<r;i++)
            {  
                if(s[i]!=t[i]){
                cout<<t[i]-s[i]+9*(r-i-1)<<endl;
                 return;
                }
            }
            cout<<0<<endl;
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