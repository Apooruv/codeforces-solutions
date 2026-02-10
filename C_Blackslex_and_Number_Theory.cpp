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
    ll mini=INT_MIN;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll minid=INT_MAX;
    sort(a.begin(),a.end());
    // for(ll i=0;i<n-1;i++)
    // {
    //     minid=min(minid,a[i+1]-a[i]);
    // }
    mini=max(a[0],a[1]-a[0]);
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
