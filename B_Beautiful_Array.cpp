#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
    if(s<(k*b)||s>(k*b)+(k-1)*n)
    {
        cout<<-1<<"\n";
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(s==0)
        {
            cout<<0<<" ";
            continue;
        }
        ll x=0;
        if(i==0)
        {
            x+=k*b;
            s-=k*b;
        }
        if(s<k)
        {x+=s;s=0;}
        else
        {
            x+=k-1;
            s-=k-1;
        }
        cout<<x<<" ";
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
