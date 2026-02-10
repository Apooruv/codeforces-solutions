#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,d;cin>>n>>d;
    d*=60;
    ll h=0,e=0;
    for(ll i=0;i<n;i++)
    {
        ll x;cin>>x;
        if(x==0)
        h++;
        else
        e++;
    }
    if(d<120)
    {
        cout<<min((d/30),e)<<"\n";
        return;
    }
    ll maxi=-1;
    ll mini=min((d/30),e);
    maxi=max(maxi,mini);
    for(ll i=1;i<=h;i++)
    {
        ll hmu=120*i;
        if(hmu>d)
        break;
        ll tl=d-hmu;
        ll es=min((tl/15),e);
        maxi=max(maxi,es+i);
    }
    cout<<maxi<<"\n";


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

