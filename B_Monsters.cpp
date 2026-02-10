#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,k;cin>>n>>k;
    vector<pair<ll,ll>> a(n);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a[i]={((x%k)),i+1};
        if(a[i].first==0)
        a[i].first=k;
    }
    sort(all(a),[](pair<ll,ll> e, pair<ll,ll> d){
        if(e.first==d.first)
        return e.second<d.second;
        return e.first>d.first;
    });
    for(int i=0;i<n;i++)
    {
        cout<<a[i].second<<" ";
    }
    cout<<"\n";

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
