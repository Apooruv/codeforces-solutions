#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define pll pair<long long,long long>



ll solve(string &s,bool t,ll prev,ll ind,bool lz)
{
    if(ind==s.size())
    return 1;
    ll lb=0,ub=(t)?(s[ind]-'0'):9;
    ll res=0;
    for(ll i=lb;i<=ub;i++)
    {
        if(i==prev&&!lz)
        continue;
        res+=solve(s,(t&&(i==ub)),i,ind+1,(lz&&(i==0)));
    }
    return res;
}

void _lord_of_the_mysteries() 
{
    ll a,b;cin>>a>>b;
    string as=to_string(a-1);
    string bs=to_string(b);
    ll ans=solve(bs,1,10,0,1)-solve(as,1,10,0,1);
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
