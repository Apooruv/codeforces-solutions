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
    vector<ll> a(n),a1(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll lo=-1;
    for(ll i=0;i<n;i++)
    {
        cin>>a1[i];
        if(lo==-1&&a[i]!=a1[i])
        lo=i;
    }
    ll hi=n-1;
    while(a1[hi]==a[hi])
    {
        hi--;
    }
    if(lo!=0)
    {
        ll i=lo-1;
        while(i>=0&&a1[i]<=a1[lo])
        {
            lo--;i--;
        }
    }
    if(hi!=n-1)
    {
        ll i=hi+1;
        while(i<n&&a1[i]>=a1[hi])
        {
            hi++;i++;
        }
    }
    cout<<lo+1<<" "<<hi+1<<"\n";
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
