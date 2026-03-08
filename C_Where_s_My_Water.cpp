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
    ll n,h;cin>>n>>h;
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++)
    cin>>a[i];
    vector<vector<ll>> mat(n+1,vector<ll>(n+1));
    for(ll i=1;i<=n;i++)
    {
        mat[i][i]=a[i];
        for(ll j=i-1;j>=1;j--)
        {
            mat[i][j]=max(mat[i][j+1],a[j]);
        }
        for(ll j=i+1;j<=n;j++)
        {
            mat[i][j]=max(mat[i][j-1],a[j]);
        }
    }
    vector<vector<ll>> t(n+1,vector<ll>(n+1,0));
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++)
        {
            if(h-mat[i][j]>0)
            t[i][j]=t[i][j-1]+h-mat[i][j];
            else
            t[i][j]=t[i][j-1];
        }
    }
    ll ans=0;
    for(ll i=1;i<=n;i++)
    {
        ll temp=i;
        for(ll j=i;j<=n;j++)
        {
            while(temp<j&&mat[i][temp+1]<=mat[j][temp+1])
            temp++;
            ll c=t[i][temp]+t[j][n]-t[j][temp];
            ans=max(ans,c);
        }
    }
    cout<<ans<<"\n";

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
