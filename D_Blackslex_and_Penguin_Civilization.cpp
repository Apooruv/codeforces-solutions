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
    vector<ll> a;
    a.pb(0);
    for(ll i=1;i<=n;i++)
    {
        vector<ll> b;
        for(ll j:a)
        {
            b.pb((j*2)+1);
        }
        for(ll j=0;j<(1<<i);j+=2)
        {
            b.pb(j);
        }
        a=b;
    }
    for(ll i:a)
    {
        cout<<i<<" ";
    }
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
