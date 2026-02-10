#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,d,p,k;
    cin>>n>>d>>p>>k;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(all(a));ll x=0;
    for(ll i=0;i<=k;)
    {
        ll ns=d+(i*p);
        if(a[x]>ns)
        {
            x++;
            i++;
        }
        else
        {
            x++;
        }
        if(x==n&&i!=k+1)
        {
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";
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
