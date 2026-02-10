#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    ll n,k;cin>>n>>k;
    vector<ll> freq(26,0);
    for(ll i=0;i<n;i++)
    {
        char ch;cin>>ch;
        freq[ch-'a']++;
    }
    vector<ll> of,ef;
    for(int i=0;i<26;i++)
    {
        if((freq[i]&1))
        {
            of.pb(freq[i]);
        }
        else if(freq[i]!=0)
        ef.pb(freq[i]);
    }
    if(of.size()>k+1)
    {
        cout<<"NO\n";
    }
    else
    cout<<"YES\n";
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
