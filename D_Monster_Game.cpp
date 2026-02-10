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
    vector<ll> a(n),pre(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        ll b;
        cin>>b;
        if(i==0)
        pre[i]=b;
        else
        pre[i]=pre[i-1]+b;
    }
    sort(a.begin(),a.end());ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ll x=a[i];
        ll av=n-i;
        ll l=0;ll h=n-1,ind=-1;
        while(l<=h)
        {
            ll m=(l+h)/2;
            if(pre[m]>av)
            h=m-1;
            else
            {
                ind=m;
                l=m+1;
            }
        }
        ans=max(ans,(ind+1)*x);
    }
    cout<<ans<<"\n";
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
