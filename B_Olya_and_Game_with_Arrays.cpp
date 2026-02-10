#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    int n;cin>>n;int sm=0;vector<pair<int,int>> as;
    while(n--)
    {
        int x;cin>>x;int mini=INT_MAX;int mini2=INT_MAX;int mind=-1;
        vector<int> a(x);
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
            if(a[i]<mini)
            {
                mini=a[i];
                mind=i;
            }
        }
        for(int i=0;i<x;i++)
        {
            if(mind!=i)
            mini2=min(mini2,a[i]);
        }
        if(x==1)
        {
            as.pb({mini,-1});
        }
        else
        as.pb({mini,mini2});

    }
    n=as.size();
    int mini=INT_MAX;
    for(auto &i:as)
    {
        mini=min(mini,i.first);
        if(i.second==-1)
        i.second=i.first;
    }
    sort(all(as),[](pair<int,int> e, pair<int,int> d){
        return e.second>d.second;
    });
    ll sum=0;sum+=1ll*mini;
    for(int i=0;i<n-1;i++)
    {
        sum+=1ll*as[i].second;
    }
    cout<<sum<<"\n";
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
