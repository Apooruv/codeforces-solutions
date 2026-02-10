#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> a(n);int odd=0;bool cond=true;long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            sum+=a[i];
            else
            odd++;
        }
        if(odd==0)
        {
            cout<<0<<endl;
            continue;
        }
        priority_queue<long long> oddi;
        if(odd%2==0)
        odd/=2;
        else
        {
            odd--;
            odd/=2;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                oddi.push(a[i]);
                if(oddi.size()>odd)
                {
                    sum+=oddi.top();
                    oddi.pop();
                }
            }
        }
        cout<<sum<<endl;
    }
}