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
        vector<int> a(n,-1);
        for(int i=1;i<n;i+=2)
        {
            a[i]=3;
        }
        if(n%2==0)
        a[n-1]=2;
        for(int i:a)
        cout<<i<<" ";
        cout<<endl;
    }
}