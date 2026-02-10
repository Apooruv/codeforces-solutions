#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second

bool ok(vector<ll> &a, ll m, ll n, ll d)
{
    ll lines = 1, sl = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > m) return false;

        if (sl == 0)
            sl = a[i];
        else if (sl + 1 + a[i] <= m)
            sl += 1 + a[i];
        else
        {
            lines++;
            sl = a[i];
        }
    }
    return lines == d;
}

void _lord_of_the_mysteries() 
{
    ll n,d;cin>>n>>d;
    vector<ll> a(n);ll maxi=-1;ll sum=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
        sum+=a[i];
    }
    ll l=maxi,r=sum;ll minl=-1;ll maxl=1e18;
    while(l<=r)
    {
        ll m=(l+r)/2;
        if(ok(a,m,n,d))
        {
            minl=m;
            r=m-1;
        }
        else
        l=m+1;
    }
    l=maxi;r=sum;
    while(l<=r)
    {
        ll m=(l+r)/2;
        if(ok(a,m,n,d))
        {
            maxl=m;
            l=m+1;
        }
        else
        r=m-1;
    }
    if(minl==-1)
    {
        cout<<-1<<" "<<-1<<"\n";
    }
    else
    {
        cout<<minl<<" "<<maxl<<"\n";
    }


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
