#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second

void solve()
{
    int n;cin>>n;
    ll s=1ll*((n*(n+1))/2);
    cout<<"2 1 "<<n<<"\n";
    cout.flush();
    ll b;cin>>b;
    ll k=b-s;

    ll l=1,r=n,rb=n;
    while(l<=r)
    {
        ll m=(l+r)/2;
        cout<<"1 1 "<<m<<"\n";
        cout.flush();
        ll b1;cin>>b1;
        cout<<"2 1 "<<m<<"\n";
        cout.flush();
        ll a1;cin>>a1;
        ll d=a1-b1;
        if(d==k)
        {
            rb=m;
            r=m-1;
        }
        else
        l=m+1;
    }

    ll lb=rb-k+1;
    cout<<"! "<<lb<<" "<<rb<<"\n";
    cout.flush();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--) solve();
    return 0;
}
