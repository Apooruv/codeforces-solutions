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
    ll n;cin>>n;
    string s;cin>>s;
    ll c=count(all(s),'1');
    if(c==0)
    {
        c=(n+2)/3;
        cout<<c<<"\n";
        return;
    }
    ll cz=0;
    bool po=false;
    for(char ch:s)
    {
        if(ch=='0')
        {
            cz++;
        }
        else
        {
            if(!po)
            {
                c+=(cz+1)/3;
            }
            else
            {
                c+=cz/3;
            }
            cz=0;
            po=true;
        }
    }
    c+=(cz+1)/3;
    cout<<c<<"\n";return;

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
