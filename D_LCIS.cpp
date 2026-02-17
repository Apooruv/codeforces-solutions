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
    int m,n;cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    vector<int> dp(m,0),pref(m,-1);
    int curr_val=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int c=0,l=-1;
        for(int j=0;j<m;j++)
        {
            if(b[j]<a[i])
            {
                if(dp[j]>c)
                {
                    c=dp[j];l=j;
                }
            }
            else if(a[i]==b[j])
            {
                if(c+1>dp[j])
                {
                    dp[j]=c+1;
                    pref[j]=l;
                }
            }
        }
    }
    int ans=0,ind=-1;
    for(int i=0;i<m;i++)
    {
        if(dp[i]>ans)
        {
            ans=dp[i];
            ind=i;
        }
    }
    cout<<ans<<"\n";
    vector<int> ax;
    while(ind>=0)
    {
        ax.pb(b[ind]);
        ind=pref[ind];
    }
    int x=ax.size();
    for(int i=x-1;i>=0;i--)
    {
        cout<<ax[i]<<" ";
    }
    cout<<"\n";
    return;

}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    _lord_of_the_mysteries();
    return 0;
}
