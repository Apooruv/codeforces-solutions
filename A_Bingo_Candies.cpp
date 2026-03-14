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
    ll maxi=0;
    unordered_map<ll,ll> a;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {ll x;cin>>x;
        a[x]++;
        maxi=max(maxi,a[x]);}
    }
    if(maxi<=(n-1)*n)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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
