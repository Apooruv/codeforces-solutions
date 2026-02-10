#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,b,r;cin>>n>>r>>b;
    ll x;
    x=r/(b+1);
    ll y=r%(b+1);
    ll i=0;
    while(i<n)
    {
        for(ll j=0;j<x&&i<n;j++)
        {
            cout<<"R";
            i++;
        }
        if(y>0)
        {
            cout<<"R";
            i++;
            y--;
        }
        if(i<n)
        cout<<"B";
        i++;
    }
    cout<<"\n";
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
