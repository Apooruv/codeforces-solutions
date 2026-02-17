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
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    ll ans=0;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]+a[i+1]==7||a[i]==a[i+1])
        {
            ans++;
            i++;
        }
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
