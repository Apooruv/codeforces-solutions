#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second

int tpo(ll a)
{
    int x=0;int m=0;
    while(a>0)
    {
        if((a&1)==1)
        m=x;
        a>>=1;
        x++;

    }
    return m;
}
ll ctp(int x)
{
    ll m=1;
    while(x>0)
    {
        m<<=1;
        x--;
    }
    return m;
}

void solve() 
{
    ll a,b;
    cin>>a>>b;
    if(tpo(a)<tpo(b))
    {
        cout<<-1<<"\n";
        return;
    }
    ll c=(a^b);
    if(c>a)
    {
        ll d=ctp(tpo(a));
        ll e=c-d;
        cout<<"2"<<"\n";
        cout<<e<<" "<<d<<"\n";
        return;

    }
    else if(c==0)
    {
        cout<<0<<"\n";return;
    }
    else
    {
        cout<<1<<"\n";
        cout<<c<<"\n";return;
    }
    
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while (t--) 
    solve();
    return 0;
}
