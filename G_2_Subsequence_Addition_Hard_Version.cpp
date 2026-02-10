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
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(all(a));
    if(a[0]!=1)
    {
        cout<<"NO\n";
        return;
    }
    ll sum=1;
    for(ll i=1;i<n;i++)
    {
        if(a[i]>sum)
        {
            cout<<"NO\n";
            return;
        }
        sum+=a[i];
    }
    cout<<"YES\n";return;

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
