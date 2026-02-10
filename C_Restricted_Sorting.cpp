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
    vector<ll> a(n);vector<ll> b(n);
    ll mini=INT_MAX,maxi=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        mini=min(mini,a[i]);
        maxi=max(maxi,a[i]);
    }
    
    sort(all(a));
    ll k=INT_MAX;
    for(ll i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            ll temp=max(abs(a[i]-mini),abs(a[i]-maxi));
            k=min(k,temp);
        }

    }
    if(k==INT_MAX)
    cout<<-1<<"\n";
    else
    cout<<k<<"\n";
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
