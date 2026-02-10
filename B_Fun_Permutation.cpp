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
        vector<int> p(n);
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        //vector<int> q(n);
        for(int i=0;i<n;i++)
        cout<<n-p[i]+1<<" ";
        cout<<endl;
    }
}
