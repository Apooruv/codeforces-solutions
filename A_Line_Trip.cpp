#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void solve() 
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);int maxi=-1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int prev=0;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,(a[i]-prev));
        prev=a[i];
    }
    maxi=max(maxi,2*(x-prev));
    cout<<maxi<<"\n";
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
