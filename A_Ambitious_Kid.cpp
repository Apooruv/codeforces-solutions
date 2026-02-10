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
    int mini=INT_MAX;
    while(n--)
    {
        int x;cin>>x;
        mini=min(mini,abs(x));
    }
    cout<<mini<<"\n";
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    solve();
    return 0;
}
