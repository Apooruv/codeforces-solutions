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
    vector<ll> a(n+1,0);
    a[n-1]=1;
    a[n]=n;
    
    bool c=true;
    for(ll i=n-2;i>=0;i--)
    {
        ll x=a[i+1];
        if(c)
        a[i]=x+i;
        else
        a[i]=x-i;
        c=!c;
    }
    for(ll i=1;i<=n;i++)
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
