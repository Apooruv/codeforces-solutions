#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second

void solve() 
{
    int a,b;cin>>a>>b;
    vector<int> n(a);
    vector<int> k(b);
    for(int i=0;i<a;i++)
    {
        cin>>n[i];
    }
    for(int i=0;i<b;i++)
    {
        cin>>k[i];
    }
    sort(all(n),greater<int>());
    sort(all(k));ll sum=0,temp=1;int j=0;
    for(int i:k)
    {
        int x=i+j;
        while(j<x&&j<a)
        {
            if(temp==i)
            {sum+=0;temp=1;j++;}
            else
            {sum+=n[j];temp++;j++;}
        }
    }
    while(j<a){sum+=n[j];j++;}
    cout<<sum<<"\n";

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
