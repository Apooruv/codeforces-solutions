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
    int es=0;int cd=0;bool c=false;
    for(int i=0;i<n;i++)
    {
        char ch;cin>>ch;
        if(ch=='.')
        {
            cd++;
            es++;
        }
        if(cd>=3)
        {
            c=true;
        }
        if(ch=='#')
        cd=0;
    }
    if(es==0)
    {
        cout<<0<<"\n";
        return ;
    }
    if(c)
    {
        cout<<2<<"\n";
    }
    else
    {
        cout<<es<<"\n";
    }
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
