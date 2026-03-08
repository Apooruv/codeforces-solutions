#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
#define pll pair<long long,long long>

void _lord_of_the_mysteries() 
{
    ll n;cin>>n;
    string s;cin>>s;
    ll f=-1,l=-1;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            if(f==-1)
            f=i;
            l=i;
        }
    }
    if(f==-1)
    {
        cout<<"0 0\n";
        return;
    }
    ll maxi=0,mini=0,c=0;
    for(ll i=f;i<=l;i++)
    {
        if(s[i]=='1')
        c++;
        else
        {
            if(i+1<=l&&s[i+1]=='0')
            {
                if(c>0)
                {
                    maxi+=c;
                    mini+=(c/2)+1;
                    c=0;
                }
                while(i+1<=l&&s[i+1]=='0')
                i++;
            }
            else
            c++;
            
        }
    }
    if(c>0)
    {
        maxi+=c;
        mini+=(c/2)+1;
        c=0;
    }
    cout<<mini<<" "<<maxi<<"\n";
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
