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
    ll n,k,p,m;
    cin>>n>>k>>p>>m;
    queue<ll> q;
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    ll temp=k;
    bool c=0;
    ll wc=0;
    for(ll i=0;i<n;i++)
    {
        ll x;cin>>x;
        if(i+1==p)
        {
            wc=x;
            if(temp>0)
            c=1;
            else
            q.push(0);
        }
        else
        {
            if(temp>0)
            pq.push(x);
            else
            q.push(x);
        }
        temp--;

    }
    ll ans=0;
    while(m>0)
    {
        if(c)
        {
            if(m<wc)
            break;
            m-=wc;
            ans++;
            q.push(0);
            ll nn=q.front();
            q.pop();
            if(nn==0)
            {
                c=1;
            }
            else
            {
                c=0;
                pq.push(nn);
            }

        }
        else
        {
            temp=pq.top();
            pq.pop();
            if(m<temp)
            break;
            m-=temp;
            q.push(temp);
            ll nn=q.front();
            q.pop();
            if(nn==0)
            {
                c=1;
            }
            else
            {
                pq.push(nn);
            }
        }
    }
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
