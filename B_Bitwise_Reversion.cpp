#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void solve() 
{
    int x,y,z;cin>>x>>y>>z;
    bool q=true;
    while(x>0||y>0||z>0)
    {
        int a=x&1;
        int b=y&1;
        int c=z&1;
        if(a==1&&b==1&&c==0)
        q=false;
        else if(a==0&&b==1&&c==1)
        q=false;
        else if(a==1&&b==0&&c==1)
        q=false;
        x>>=1;
        y>>=1;
        z>>=1;
    }
    if(q)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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
