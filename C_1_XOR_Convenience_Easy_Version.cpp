#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n;cin>>n;
    vector<ll> p(n+1),s;
    vector<bool> vis(n+1,false);
    p[n]=1;
    vis[1]=true;
    s.pb(1);
    for(ll i=n-1;i>=2;i--)
    {
        
        
            ll x=-1;
            for(ll j:s)
            {
                ll temp=j^i;
                if(temp>=1&&temp<=n&&!vis[temp])
                {
                    x=temp;
                    break;
                }
            }
            if(x==-1)
            {
                for(ll k=n;k>=1;k--)
                {
                    if(!vis[k])
                    {x=k;
                    break;}
                }
            }
            p[i]=x;vis[x]=true;
            s.pb(x);
        

    }
    for(ll i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            p[1]=i;break;
        }
    }
    for(ll i=1;i<=n;i++)
    cout<<p[i]<<" ";
    cout<<"\n";return;
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
