#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second


void _fool() 
{
    int n,k;
    cin>>n>>k;
    int mini=INT_MAX;
    int a[n];int even=0;int cf=-1, df=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        df=min(df,4-(a[i]%4));
        if((a[i]&1)==0)
        {even++;cf=a[i];}
    }
    if(k!=4)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%k==0)
            {mini=0;break;}
            mini=min(mini,(k-(a[i]%k)));
        }
    }
    else
    {
        if(even>=2)
        {
            cout<<0<<"\n";
        }
        else if(even==1)
        {
            if(cf%4!=0)
            cout<<1<<"\n";
            else
            cout<<0<<"\n";
        }
        else
        {
            if(df!=1)
            cout<<2<<"\n";
            else
            cout<<df<<"\n";
        }
        return;
    }
    cout<<mini<<"\n";
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while (t--) 
    _fool();
    return 0;
}
