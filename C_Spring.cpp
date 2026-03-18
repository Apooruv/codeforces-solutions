#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define pll pair<long long,long long>

ll lcm(ll a,ll b)
{
    ll c=gcd(a,b);
    ll d=a/c;
    ll e=(ll)2e18;
    if(d>e)
    return e;
    return d*b;
}

void _lord_of_the_mysteries() 
{
    ll a,b,c,m;cin>>a>>b>>c>>m;
    ll ta=m/a,tb=m/b,tc=m/c;
    ll lab=lcm(a,b);
    ll oab=m/lab;
    ll oac=m/lcm(a,c);
    ll obc=m/lcm(c,b);
    ll oabc=m/lcm(lab,c);

    ll aa=6*ta-3*oab-3*oac+2*oabc;
    ll ab=6*tb-3*oab-3*obc+2*oabc;
    ll ac=6*tc-3*obc-3*oac+2*oabc;
    cout<<aa<<" "<<ab<<" "<<ac<<"\n";
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
