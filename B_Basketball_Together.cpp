#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,d;cin>>n>>d;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    ll l=0,h=n-1;ll ans=0;
    while(l<=h)
    {
        ll x=d/a[h];
        l+=d/a[h];
        if(l>h)
        break;
        h--;
        ans++;
    }
    cout<<ans<<"\n";
    return;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    _lord_of_the_mysteries();
    return 0;
}
