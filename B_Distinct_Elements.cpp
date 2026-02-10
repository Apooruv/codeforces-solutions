#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second

void solve()
{
    int n;cin>>n;
    vector<ll>b(n+1);
    b[0]=0;
    for(int i=1;i<=n;i++)
    cin>>b[i];
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)
    {
        ll d=b[i]-b[i-1];
        if(d==i)a[i]=i;
        else a[i]=a[i-d];
    }
    for(int i=1;i<=n;i++)
    cout<<a[i]<<" ";
    cout<<"\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--)solve();
}
