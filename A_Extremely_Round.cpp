#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _lord_of_the_mysteries() 
{
    int n;cin>>n;
    int ans=0;
    if(n<10)
    {
        cout<<n<<"\n";
        return;
    }
    if(n<100)
    {
        cout<<9+(n/10)<<"\n";
        return;
    }
    if(n<1000)
    {
        cout<<18+(n/100)<<"\n";
        return;
    }
    if(n<10000)
    {
        cout<<27+(n/1000)<<"\n";
        return;
    }
    if(n<100000)
    {
        cout<<36+(n/10000)<<"\n";
        return;
    }
    if(n<1000000)
    {
        cout<<45+(n/100000)<<"\n";
        return;
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
