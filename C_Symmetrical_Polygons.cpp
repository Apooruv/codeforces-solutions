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
    unordered_map<int,int> b;vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    ll perimeter=0;
    vector<int> os;
    for(auto &it:b)
    {
        if(it.ss>=2)
        {
            if(it.ss%2==0)
            {
                perimeter+=it.ff*it.ss;
            }
            else
            {
                perimeter+=
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
    solve();
    return 0;
}
