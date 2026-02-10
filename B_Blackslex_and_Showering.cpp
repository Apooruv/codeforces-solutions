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
    vector<ll> d(n-1);
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=0)
        {
            d[i-1]=abs(a[i]-a[i-1]);
            sum+=d[i-1];
        }
    }
    ll mini=INT_MAX;
    mini=min(sum-d[0],sum-d[n-2]);
    for(ll i=0;i<n-2;i++)
    {
        mini=min(mini,(sum-(d[i]+d[i+1])+(abs(a[i]-a[i+2]))));
    }
    cout<<mini<<"\n";
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
