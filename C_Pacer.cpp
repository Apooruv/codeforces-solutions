#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;long long m;
        cin>>n>>m;
        vector<pair<long long,int>> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;
        }
        bool even=true;int prev=0;int score=0;
        for(int i=0;i<n;i++)
        {
            if(even)
            {
                if(a[i].first%2==0&&a[i].second==0)
                {
                    score+=a[i].first-prev;
                    prev=a[i].first;
                }
                else if(a[i].first%2!=0&&a[i].second==0)
                {
                    even=!even;
                    score+=a[i].first-prev-1;
                    prev=a[i].first;
                }
                else if(a[i].first%2==0&&a[i].second==1)
                {
                    even=!even;
                    score+=a[i].first-prev-1;
                    prev=a[i].first;
                }
                else
                {
                    score+=a[i].first-prev;
                    prev=a[i].first;
                }
            }
            else
            {
                if(a[i].first%2==0&&a[i].second==1)
                {
                    score+=a[i].first-prev;
                    prev=a[i].first;
                }
                else if(a[i].first%2!=0&&a[i].second==1)
                {
                    even=!even;
                    score+=a[i].first-prev-1;
                    prev=a[i].first;
                }
                else if(a[i].first%2==0&&a[i].second==0)
                {
                    even=!even;
                    score+=a[i].first-prev-1;
                    prev=a[i].first;
                }
                else
                {
                    score+=a[i].first-prev;
                    prev=a[i].first;
                }
            }
        }
        score+=m-a[n-1].first;
        cout<<score<<endl;
    }
}
