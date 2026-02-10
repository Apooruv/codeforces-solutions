#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>k>>n;
        
       while(k--)
       {
            n*=2;
       }
       cout<<n<<endl;
    }
    return 0;
}