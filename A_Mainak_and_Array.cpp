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
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll ans=a[n-1]-a[0];
    for(ll i=0;i<n;i++)
    {
        if(i!=0)
        {
            ans=max(ans,a[i]-a[0]);
        }
        if(i!=n-1)
        {
            ans=max(ans,a[i]-a[i+1]);
            ans=max(ans,a[n-1]-a[i]);
        }
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
