#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        int count=0;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        {cin>>b[i];if(!(a[i]-b[i]))count++;}

        if(count==0)
        {
            cout<<"YES"<<endl;
            continue;
        }

        if(a[n-1]!=b[n-1])
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=b[i])
            {
                if((a[i]^a[i+1])==b[i])
                {
                    a[i]=b[i];
                }
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]!=b[i])
            {
                if((a[i]^a[i+1])==b[i])
                a[i]=b[i];
            }
        }
        bool s=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            s=false;
        }
        s ? cout<<"YES"<<endl:cout<<"NO"<<endl;

    }
}