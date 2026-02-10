#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,m,h;
    cin>>n>>m>>h;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    unordered_map<ll,ll> ab;

    for(ll i=0;i<m;i++)
    {
        ll b,c;cin>>b>>c;
        b--;
        ab[b]+=c;
        if(a[b]+ab[b]>h)
        ab.clear();
    }
    for(auto &i:ab)
    a[i.ff]+=i.ss;
    for(ll i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
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
