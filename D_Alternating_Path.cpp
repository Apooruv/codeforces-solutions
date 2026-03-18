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
    ll n,m;cin>>n>>m;
    vector<vector<ll>> adj(n+1);
    for(ll i=0;i<m;i++)
    {
        ll u,v;cin>>u>>v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vector<ll> b(n+1,-1);
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        if(b[i]!=-1)
        continue;
        queue<ll> q;
        q.push(i);b[i]=0;
        ll c0=1,c1=0;
        bool cf=1;
        while(!q.empty())
        {
            ll node=q.front();q.pop();
            for(ll j:adj[node])
            {
                if(b[j]==-1)
                {
                    b[j]=1-b[node];
                    if(b[j]==0)
                    c0++;
                    else
                    c1++;
                    q.push(j);
                }
                else if(b[j]==b[node])
                cf=0;
            }
        }
        if(cf)
        ans+=max(c0,c1);
    }
    cout<<ans<<"\n";return;
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
