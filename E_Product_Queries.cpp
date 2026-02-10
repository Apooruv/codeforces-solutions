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
    ll n;cin>>n;
    set<ll> a;
    vector<ll> b;
    for(ll i=0;i<n;i++)
    {
        ll x;cin>>x;
        if(a.find(x)==a.end())
        b.pb(x);
        a.insert(x);
    }
    sort(all(b));
    vector<ll> dist(n+1,INT_MAX);
    queue<pll> q;
    for(int i:b)
    {
        if(i<=n)
        dist[i]=1;
        q.push({1,i});
    }
    
    while(!q.empty())
    {
        auto it=q.front();
        ll x=it.ss;
        ll d=it.ff;
        q.pop();
        if(d>dist[x])
        continue;
        for(int i:b)
        {
            if(i*x>n)
            break;
            ll nx=i*x;
            ll nd=d+1;
            if(nd<dist[nx])
            {
                q.push({nd,nx});
                dist[nx]=nd;
            }
        }
    }
    for(ll i=1;i<=n;i++)
    {
        if(dist[i]==INT_MAX)
        cout<<-1<<" ";
        else
        cout<<dist[i]<<" ";
    }
    cout<<"\n";
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
