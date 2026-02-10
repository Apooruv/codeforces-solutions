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
    if((n&(n-1))==0)
    {
        cout<<-1<<"\n";return;
    }
    vector<ll> p(n+1),s;
    vector<bool> vis(n+1,false),visi(n+1,false);
    p[n]=1;
    vis[1]=true;
    s.pb(1);
    for(ll i=n-1;i>=1;i--)
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
                cout<<-1<<"\n";
                return;
            }
            p[i]=x;vis[x]=true;
            s.pb(x);
        

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
