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
    string s;cin>>s;
    ll n=s.length();
    if(n==1)
    {
        cout<<s<<"\n";
        return;
    }
    ll fsum=0;
    vector<ll> a(10,0);
    for(char ch:s)
    {
        ll x=ch-'0';
        a[x]++;
        fsum+=x;
    }
    ll x1=1;
    if(fsum-150>0)
    x1=fsum-150;
    for(ll i=x1;i<=fsum;i++)
    {
        ll c=i;
        ll sum=i;
        vector<ll> seq;
        seq.pb(i);
        while(c>9)
        {
            ll nn=0,temp=c;
            while(temp>0)
            {
                nn+=temp%10;
                temp/=10;
            }
            c=nn;
            seq.pb(c);
            sum+=c;
        }
        sum+=c;
        if(sum==fsum)
        {
            vector<ll> b=a;
            bool ok=1;
            for(ll j:seq)
            {
                string temp=to_string(j);
                for(char ch:temp)
                {
                    ll x=ch-'0';
                    if(b[x]>0)
                    b[x]--;
                    else
                    {
                        ok=0;break;
                    }
                }
                if(!ok)
                break;
            }
            if(ok)
            {
                ll rem=0;
                for(ll j=0;j<10;j++)
                {
                    rem+=b[j];
                }
                if(rem==0)
                continue;
                string temp="";
                for(ll j=1;j<=9;j++)
                {
                    if(b[j]>0)
                    {
                        temp+=to_string(j);
                        b[j]--;
                        break;
                    }
                }
                if(temp=="")
                continue;
                for(ll j=0;j<=9;j++)
                {
                    while(b[j]>0)
                    {
                        temp+=to_string(j);
                        b[j]--;
                    }

                }
                cout<<temp;
                for(ll num:seq)
                cout<<num;
                cout<<"\n";
                return;
            }
        }
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
