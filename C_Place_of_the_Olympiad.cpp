#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll l=0,r=m;
    while(l+1<r)
    {
        ll mid=(l+r)/2;
        if((m/(mid+1)*mid + m%(mid+1))*n >= k)
        r=mid;
        else
        l=mid;
    }
    cout<<r<<"\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;cin>>t;
    while(t--) 
    solve();
}
