#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    ll nr[8]={a,a,-a,-a,b,b,-b,-b};
    ll nc[8]={b,-b,b,-b,a,-a,a,-a};
    set<pair<ll,ll>> mp;
    for(int i=0;i<8;i++)
    {
        mp.insert({xk+nr[i],yk+nc[i]});
    }
    ll ans=0;
    for(int i=0;i<8;i++)
    {
        if(a==b&&i==4)
        break;
        if(mp.find({xq+nr[i],yq+nc[i]})!=mp.end())
        ans++;
    }
    cout<<ans<<"\n";
    return;
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
