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
    vector<pll> a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i].ff>>a[i].ss;
    }
    double maxi=0.0;
    for(ll i=n-1;i>=0;i--)
    {
        double t=a[i].ff+(1.0-a[i].ss/100.0)*maxi;
        maxi=max(t,maxi);
    }
    cout<<fixed<<setprecision(10)<<maxi<<"\n";
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
