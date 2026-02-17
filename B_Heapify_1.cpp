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
    vector<ll> a(n+1);
    bool c=1;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        if(c)
        {
            ll x1=a[i];
            ll x2=i;
            while((x1&1)==0)
            x1>>=1;
            while((x2&1)==0)
            x2>>=1;
            if(x1!=x2)
            c=0;
        }
    }
    c==1?cout<<"YES\n":cout<<"NO\n";
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
