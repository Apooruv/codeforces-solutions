#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second

void _lord_of_the_mysteries() 
{
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)
    {  
        cin>>a[i];
        if(a[i]>q)
        a[i]=0;
        else
        a[i]=1;
    }
    ll ans=0;
    ll con=0;
    for(ll i:a)
    {
        if(i==1)
        con++;
        else
        {
            if(con>=k)
            ans+=(con-k+1)*(con-k+2)/2;
            con=0;
        }
    }
    if(con>=k)
    {
        ans+=(con-k+1)*(con-k+2)/2;
    }
    cout<<ans<<"\n";
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
