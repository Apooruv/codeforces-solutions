#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void solve() 
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n<=1)
    {
        cout<<"YES"<<"\n";
        return;
    }
    if(k>=2)
    {
        cout<<"YES"<<"\n";
        return;
    }
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                cout<<"NO"<<"\n";return;
            }
        }
        cout<<"YES"<<"\n";
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
