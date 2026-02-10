#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        vector<int> col(4);int c=0;
        for(int i=0;i<4;i++)
        {
            cin>>col[i];
            if(col[i]%2!=0)
            c++;
        }
        if(c<=1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        bool a=(col[3]%2)!=0;
        if(c==2)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(c>=3&&col[0]>0&&col[1]>0&&col[2]>0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        cout<<"No"<<endl;
        


    }
}