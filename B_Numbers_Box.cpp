#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    int n,m;cin>>n>>m;
    int ans=0;
    int mini=INT_MAX;
    int neg=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x;cin>>x;
            if(x<0)
            neg++;
            ans+=abs(x);
            mini=min(mini,abs(x));
        }
    }
    if(neg&1)
    ans-=2*mini;
    cout<<ans<<"\n";
    return;

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
