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
    //unordered_map<ll,ll> a;
    priority_queue<pll> pq;
    for(ll i=0;i<n;i++)
    {
        ll x;cin>>x;
        pq.push({x,i});
    }
    ll ind=INT_MAX;
    ll ans=0;
    while(!pq.empty())
    {
        ll j=pq.top().ss;
        pq.pop();
        if(j>=ind)
        continue;
        ind=j;
        ans++;
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
