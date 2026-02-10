#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll a,b;cin>>a>>b;
    if(b>a)
    {cout<<1<<"\n";return;}
    if(b==a)
    {
        cout<<2<<"\n";return;
    }
    ll ans=0;
    ans=INT_MAX;
    for(ll i=0;i<=100;i++)
    {
        ll na=a,nb=b+i,temp=0;
        if(nb==1)
        continue;
        while(na>0)
        {
            na/=nb;
            temp++;
        }
        ans=min(ans,temp+i);
    }
    cout<<ans<<"\n";return;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while (t--) 
    _lord_of_the_mysteries();
    return 0;
}
