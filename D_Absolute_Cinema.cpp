#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define pll pair<long long,long long>

void _lord_of_the_mysteries() 
{
    ll n;cin>>n;
    vector<ll> f(n+1);
    for(ll i=1;i<=n;i++)
    cin>>f[i];
    vector<ll> a(n+1);
    for(ll i=2;i<n;i++)
    {
        a[i]=f[i+1]+f[i-1]-2*f[i];
        a[i]/=2;
    }
    ll sum=0;
    for(ll i=2;i<=n;i++)
    {
        sum+=(i-1)*a[i];
    }
    a[n]=(f[1]-sum)/(n-1);
    sum=0;
    for(ll i=1;i<n;i++)
    {
        sum+=(n-i)*a[i];
    }
    a[1]=(f[n]-sum)/(n-1);
    for(ll i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";return;
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
