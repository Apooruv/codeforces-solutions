#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;int ans=0;
        while(n>0)
             
        {
            if((n&1)==1)
            ans++;
            n>>=1;
        }int k=1;
        k<<=ans;
        cout<<k-1<<endl;
    }
}