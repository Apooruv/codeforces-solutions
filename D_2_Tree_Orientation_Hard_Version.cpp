#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define pll pair<long long,long long>

struct DSU
{
    vector<ll> p;
    DSU(ll n)
    {
        p.resize(n);
        iota(all(p),0);
    }
    ll find(ll i)
    {
        if(p[i]==i)
        return i;
        return p[i]=find(p[i]);
    }
    void unite(ll i, ll j)
    {
        ll ri=find(i);
        ll rj=find(j);
        if(ri!=rj)
        {
            p[ri]=rj;
        }
    }
};

void _lord_of_the_mysteries() 
{
    ll n;cin>>n;
    vector<string> adj(n);
    for(ll i=0;i<n;i++)
    {
        cin>>adj[i];
    }
    vector<pll> ed;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(i==j||adj[i][j]=='0')
            continue;
            bool c=1;
            for(ll k=0;k<n;k++)
            {
                if(k==i||k==j)
                continue;
                if(adj[i][k]=='1'&&adj[k][j]=='1')
                {
                    c=0;break;
                }
            }
            if(c)
            ed.pb({i,j});
        }
    }
    if(ed.size()!=n-1)
    {
        cout<<"NO\n";
        return;
    }
    DSU d(n);
    ll comp=n;
    for(auto e:ed)
    {
        if(d.find(e.ff)!=d.find(e.ss))
        {
            d.unite(e.ff,e.ss);
            comp--;
        }
    }
    if(comp!=1)
    {
        cout<<"NO\n";
        return;
    }
    vector<vector<ll>> g(n);
    for(auto e:ed)
    {
        g[e.ff].pb(e.ss);
    }
    for(ll i=0;i<n;i++)
    {
        vector<bool> vis(n,false);
        queue<int> q;
        q.push(i);
        vis[i]=1;
        while(!q.empty())
        {
            ll temp=q.front();
            q.pop();
            for(ll x:g[temp])
            {
                if(!vis[x])
                {vis[x]=1;q.push(x);}
            }
        }
        for(ll j=0;j<n;j++)
        {
            if(vis[j]!=(adj[i][j]=='1'))
            {
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
    for(auto e:ed)
    {
        cout<<e.ff+1<<" "<<e.ss+1<<"\n";
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
