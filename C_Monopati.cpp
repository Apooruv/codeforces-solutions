#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second

void _lord_of_the_mysteries() 
{
    int n;cin>>n;
    vector<int> a(n+1),b(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    int m=2*n;

    vector<int> pmin(n+1),pmax(n+1),smin(n+2),smax(n+2);
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            pmin[i]=a[i];pmax[i]=a[i];
        }
        else
        {
            pmin[i]=min(pmin[i-1],a[i]);
            pmax[i]=max(pmax[i-1],a[i]);
        }
    }
    for(int i=n;i>=1;i--)
    {
        if(i==n)
        {
            smin[i]=b[i];smax[i]=b[i];
        }
        else
        {
            smin[i]=min(smin[i+1],b[i]);
            smax[i]=max(smax[i+1],b[i]);
        }
    }
    vector<vector<int>> v(m+2);
    for(int i=1;i<=n;i++)
    {
        int q=min(pmin[i],smin[i]);
        int h=max(pmax[i],smax[i]);

        v[q].pb(h);
    }
    priority_queue<int,vector<int>,greater<int>> pq;
    ll ans=0;
    for(int l=m;l>=1;l--)
    {
        for(int x:v[l])
        {
            pq.push(x);
        }
        if(!pq.empty())
        {
            int r=pq.top();
            ans+=1ll*(m-r+1);
        }
    }
    cout<<ans<<"\n";
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--) 
    _lord_of_the_mysteries();
    return 0;
}
