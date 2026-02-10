#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second
 
bool tp(int n)
{
    int a=0;
    while(n>0)
    {
        int x=(n&1);
        if(x==1)
        a++;
        n>>=1;
    }
    return (a%2==1);
}
 
bool isp(string s)
{
    string r=s;
    reverse(r.begin(),r.end());
    return r==s;
}
 
 
void solve() 
{
    int n;cin>>n;string s;
    if(n%2==0)
    {
        if(tp(n))
        {
            cout<<"NO"<<"\n";return;
        }
 
        cout<<"YES"<<"\n";
        return;
    }
    else
    {
        int x=n;
        
        while(x>0)
        {
            int d=(x&1);
            s.pb('0'+d);
            x>>=1;
        }
    }
    if(isp(s))
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
    return;
 
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