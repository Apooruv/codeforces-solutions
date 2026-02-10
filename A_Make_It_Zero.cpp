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
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
    }
    if((n&1)==0)
    {
        cout<<2<<"\n";
        cout<<1<<" "<<n<<"\n";
        cout<<1<<" "<<n<<"\n";
        return;
    }
    else
    {
        cout<<4<<"\n";
        cout<<1<<" "<<n-1<<"\n";
        cout<<1<<" "<<n-1<<"\n";
        cout<<n-1<<" "<<n<<"\n";
        cout<<n-1<<" "<<n<<"\n";
        return;
    }
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
