#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n;cin>>n;
    vector<ll> a(n);
    vector<ll> b(n);
    vector<ll> fa((2*n)+1,0);
    vector<ll> fb((2*n)+1,0);
    ll c=1;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=0&&a[i]==a[i-1])
        c++;
        else if(i!=0)
        {
            fa[a[i-1]]=max(fa[a[i-1]],c);
            c=1;
        }
        
    }
    fa[a[n-1]]=max(fa[a[n-1]],c);
    c=1;
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
        if(i!=0&&b[i]==b[i-1])
        c++;
        else if(i!=0)
        {
            fb[b[i-1]]=max(fb[b[i-1]],c);
            c=1;
        }
    }
    fb[b[n-1]]=max(fb[b[n-1]],c);

    ll maxi=-1;
    for(ll i=1;i<=2*n;i++)
    {
        maxi=max(maxi,fa[i]+fb[i]);
    }
    cout<<maxi<<"\n";
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
