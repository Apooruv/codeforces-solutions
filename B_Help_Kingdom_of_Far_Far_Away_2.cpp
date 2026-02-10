#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        double d;
        cin>>d;
        d*=100.0;
        int c=0;
        if(d<0)
        {
            c=2;
            d*=-1;
        }
        long long i=(long long)d;int f=2;int g=3;
        bool q=i<1;
        string ans="";
        while(i>0)
        {
            if(c==2)
            {
                ans+=')';
                c--;
            }
            if(g==0)
            {
                ans+=',';
                g=3;
            }
            else if(f!=0&&g>0)
            {
                ans+=((char)((i%10)+'0'));
                f--;
                i/=10;
                if(f<0)
                g--;
            }
            else
            {
                ans+='.';
                f--;
            }
        }
        if(q)
        {
            if(c==2)
            {ans+=")00.0";c--;}
            else
            ans+="00.0";
        }
        ans+='$';
        if(c==1)
        ans+='(';
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        cout<<ans[i];
        cout<<endl;

    
}