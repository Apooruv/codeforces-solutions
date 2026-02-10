#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,x;cin>>n>>x;
    ll maxi=INT_MIN;
    ll di=0;
    for(ll i=0;i<n;i++)
    {
        ll a,b,c;cin>>a>>b>>c;
        di+=a*(b-1);
        maxi=max(maxi,(a*b-c));
    }
    if(di>=x)
    {
        cout<<0<<"\n";
        return;
    }
    if(maxi<=0)
    {
        cout<<-1<<"\n";
        return;
    }
    x-=di;
    ll ans=0;
    ans=x/maxi;
    if(x%maxi!=0)
    ans++;
    cout<<ans<<"\n";
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
