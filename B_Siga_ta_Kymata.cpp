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
    vector<int> p(n);string x;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cin>>x;
    if(x[0]=='1'||x[n-1]=='1')
    {
        cout<<"-1\n";
        return;
    }
    for(int i=1;i<n-1;i++)
    {
        if(x[i]=='1'&&(p[i]==n||p[i]==1))
        {
            cout<<"-1\n";
            return;
        }
        
    }
    cout<<"1\n";
    cout<<"1"<<" "<<n<<"\n";
    
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
