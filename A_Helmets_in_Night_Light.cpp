#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _netrunner() 
{
    ll n,p;cin>>n>>p;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<pair<ll,ll>> c(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
        c[i]={a[i],b[i]};
    }
    sort(c.begin(),c.end(),[](pair<ll,ll> e,pair<ll,ll> d){
        return e.second<d.second;
    });
    ll i=0;ll cnt=1;ll cost=1ll*p;
    while(i<n&&c[i].ss<p&&cnt<n)
    {
        if(c[i].ff<=n-cnt)
        cost+=1ll*c[i].ff*c[i].ss;
        else
        cost+=1ll*(n-cnt)*c[i].ss;
        cnt+=1ll*c[i].ff;
        i++;
    }
    if(i==n)
    {
        cout<<cost<<"\n";
    }
    else if(i==0)
    {
        cout<<p*n<<"\n";
    }
    else if(cnt<n)
    {
        cout<<cost+(n-cnt)*p<<"\n";
    }
    else
    {
        cout<<cost<<"\n";
    }

}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;cin>>t;
    while (t--) 
    _netrunner();
    return 0;
}
