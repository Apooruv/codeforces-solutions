#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(all(a));
    ll x=0;
    vector<ll> pre(n);
    pre[0]=a[0];
    for(ll i=1;i<n;i++)
    {
        pre[i]+=pre[i-1]+a[i];
    }
    ll ans=0;
    for(ll i=0;i<=k;i++)
    {
        ll lo=i*2;
        ll hi=n-1-(k-i);
        ll sum=pre[hi]-pre[lo]+a[lo];
        ans=max(ans,sum);
    }
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
