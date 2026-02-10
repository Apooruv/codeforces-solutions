#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n;cin>>n;
    vector<ll> a(n);
    vector<ll> pref(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(i==0)
        pref[i]=a[i];
        else
        pref[i]=pref[i-1]+a[i];
    }
    ll ans=0;
    for(ll i=1;i<n;i++)
    {
        if(n%i!=0)
        continue;
        ll maxi=pref[0];
        ll mini=pref[n-1];
        ll p=0;
        for(ll j=i-1;j<n;j+=i)
        {
            ll x=pref[j]-p;
            maxi=max(maxi,x);
            mini=min(mini,x);
            p=pref[j];
        }
        ans=max(ans,maxi-mini);
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
