#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,x,k;
    cin>>n>>k>>x;
    if(x==1)
    {
        if(k==1)
        {
            cout<<"NO\n";
            return;
        }
        if((n&1)==0)
        {
            cout<<"YES\n"<<n/2<<"\n";
            for(ll i=0;i<(n/2);i++)
            cout<<2<<" ";
            cout<<"\n";
            return;
        }
        else
        {
            if(k==2)
            {cout<<"NO\n";return;}
            
            cout<<"YES\n"<<(n-3)/2+1<<"\n"<<3<<" ";
            for(int i=0;i<(n-3)/2;i++)
            {
                cout<<2<<" ";
            }
            cout<<"\n";
            return;
            
        }
    }
    else
    {
        cout<<"YES\n";
        cout<<n<<"\n";
        for(int i=0;i<n;i++)
        cout<<1<<" ";
        cout<<"\n";
        return;
    }
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
