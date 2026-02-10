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
    vector<int> dp(n,1);
    int curr_val=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                if(a[i]>curr_val)
                {
                    
                }
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    _lord_of_the_mysteries();
    return 0;
}
