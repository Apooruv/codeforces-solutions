#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int> c1(n),c2(m);
        for(int i=0;i<n;i++)
        cin>>c1[i];
        for(int i=0;i<m;i++)
        cin>>c2[i];
        cout<<n+m<<endl;
    }
    return 0;
}