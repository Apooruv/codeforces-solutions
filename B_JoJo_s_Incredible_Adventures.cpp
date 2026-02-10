#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll co=0;ll mco=0;ll f=0;
    string s;cin>>s;
    for(char ch:s)
    {
        if(ch=='0')
        {
            if(co!=0)
            {
                mco=max(mco,co);
                co=0;
            }
        }
        else
        {
            co++;
        }
    }
    ll n=s.size();
    if(co!=0)
    mco=max(co,mco);
    if(mco==n)
    {
        cout<<n*n<<"\n";
        return;
    }
    if(mco==0)
    {
        cout<<0<<"\n";
        return;
    }
    if(s[0]=='1'&&s[n-1]=='1')
    {
        ll i=0;co=0;
        while(s[i]!='0')
        {co++;i++;}
        i=n-1;
        while(s[i]!='0')
        {
            co++;i--;
        }
        mco=max(mco,co);
    }
    ll i=1;
    ll ans=0;
    while(mco>0)
    {
        ll temp=mco*i;
        ans=max(ans,temp);
        mco--;i++;
    }
    cout<<ans<<"\n";
    return;
    
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;cin>>t;
    while (t--) 
    _lord_of_the_mysteries();
    return 0;
}
