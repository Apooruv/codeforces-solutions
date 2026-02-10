#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;long long k;
        cin>>n>>k;
        vector<int>a(n);map<int,int>c;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];c[a[i]]++;
        }
        bool ok=1;map<int,int>tgt;
        for(auto p:c)
        {
            if(p.second%k!=0)
            {
                ok=0;break;
            }
            tgt[p.first]=p.second/k;
        }
        if(!ok)
        {
            cout<<0<<endl;continue;
        }
        map<int,vector<int>>pos;
        for(int i=0;i<n;i++)
        {
            pos[a[i]].push_back(i);
        }
        long long ans=0;
        map<int,int>cur;
        int lb=-1;
        for(int r=0;r<n;r++)
        {
            int v=a[r];cur[v]++;
            int q=cur[v]-tgt[v];
            if(q>0)
            {
                int idx=pos[v][q-1];lb=max(lb,idx);
            }
            ans+=r-(lb+1)+1;
        }
        cout<<ans<<endl;
    }
}
