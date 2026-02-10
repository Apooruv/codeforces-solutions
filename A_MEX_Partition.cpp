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
    vector<int> a(n);vector<bool> b(101,false);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]=true;
    }int ans=0;
    for(int i=0;i<100;i++)
    {
        if(!b[i])
        {ans=i;break;}
    }
    cout<<ans<<"\n";
    return;
    
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
