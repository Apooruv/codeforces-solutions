#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void solve() 
{
    string s;
    cin>>s;
    int n=s.size();
    int o=0,z=0;
    int ind=-1;
    if(n==1)
    {cout<<1<<"\n";return;}
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        o++;
        else
        z++;
        if(o==z)
        ind=i;
    }
    int size=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0'&&o>0)
        {
            o--;
            size++;
        }
        else if(s[i]=='1'&&z>0)
        {
            z--;
            size++;
        }
        else
        break;
    }
    cout<<n-size<<"\n";

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
