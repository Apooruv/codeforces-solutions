#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        vector<long long>d;
        for(long long i=1;i*i<=b;i++)
        {
            if(b%i==0){
                d.push_back(i);
                if(i!=b/i)d.push_back(b/i);
            }
        }
        sort(d.begin(),d.end());
        double h=sqrt((double)b/a);
        int pos=lower_bound(d.begin(),d.end(),h)-d.begin();
        long long maxi=-1;
        for(int i=max(0,pos-2);i<=min((int)d.size()-1,pos+2);i++)
        {
            long long k=d[i];
            long long ans=a*k+b/k;
            if(ans%2==0)maxi=max(maxi,ans);
        }
        cout<<maxi<<endl;
    }
}
