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
    ll x,y;cin>>x>>y;
    if((x&y)==0)
    {
        cout<<x<<" "<<y<<"\n";
        return;
    }
    ll bp,bq,p,q,ans;
    ll t=(x&y);
    p=x^t;q=y;
    ans=abs(x-p)+abs(y-q);
    bp=p;bq=q;
    p=x;q=y^t;
    ll temp;
    temp=abs(x-p)+abs(y-q);
        if((p&q)==0&&temp<ans)
        {
            ans=temp;
            bp=p;
            bq=q;
        }
    for(ll i=0;i<=30;i++)
    {
        ll k=1ll<<i;
        ll j=k-1;
        p=(x&~j)|k;
        q=(y&~k);
        if(y&k)
        q|=j;
        temp=abs(x-p)+abs(y-q);
        if((p&q)==0&&temp<ans)
        {
            ans=temp;
            bp=p;
            bq=q;
        }
        q=(y&~j)|k;
        p=(x&~k);
        if(x&k)
        p|=j;
        temp=abs(x-p)+abs(y-q);
        if((p&q)==0&&temp<ans)
        {
            ans=temp;
            bp=p;
            bq=q;
        }
    }
    cout<<bp<<" "<<bq<<"\n";
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
