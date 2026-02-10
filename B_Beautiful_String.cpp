#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void solve() 
{
    int n;cin>>n;
    vector<int> one;
    for(int i=0;i<n;i++)
    {
        char x;
        cin>>x;
        if(x=='1')
        one.push_back(i);
    }
    if(one.size()==0)
    {
        cout<<0<<"\n";
    }
    else
    {
        cout<<one.size()<<"\n";
        for(int i=0;i<one.size();i++)
        {
            cout<<one[i]+1<<" ";
        }
    }
    cout<<"\n";
}


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while (t--) 
    solve();
    return 0;
}
