#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll s,k,m;
    cin>>s>>k>>m;
    ll n=m/k;
    ll x=m%k;
    if(k<=s)
    {
        if((n&1)==0)
        {
            cout<<s-x<<"\n";
        }
        else
        {
            cout<<k-x<<"\n";
        }
        return;
    }
    else
    {
        if(s-x<0)
        cout<<0<<"\n";
        else
        cout<<s-x<<"\n";
    }
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
