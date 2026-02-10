#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--)
    {
        int n;string s;cin>>n>>s;
        int z=count(s.begin(),s.end(),'0');
        int m=0;
        for(int i=0;i<z;i++)
        {
            if(s[i]=='1') m++;
        }
        cout<<m<<endl;
    }
}
