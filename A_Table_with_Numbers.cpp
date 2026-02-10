#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,h,l;cin>>n>>h>>l;
    ll a=0,b=0,mini=min(h,l),maxi=max(h,l);
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        if(x<=mini)
        a++;
        else if(x<=maxi)
        b++;
    }
    ll ans=0;
    if(a>=b)
    {
        ans+=b;
        a-=b;
        ans+=a/2;
    }
    else
    {
        ans+=min(a,b);
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
