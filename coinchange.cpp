#include<bits/stdc++.h>
using namespace std;
int coinChange(vector<int>& coins, int amount) 
{
        int n=coins.size();
        vector<vector<int>> t(n+1,vector<int>(amount+1,0));
        for(int i=1;i<=amount;i++)
        t[0][i]=INT_MAX-1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(j<coins[i-1])
                t[i][j]=t[i-1][j];
                else
                t[i][j]=min((1+t[i][j-coins[i-1]]),t[i-1][j]);
            }
        }
        return (t[n][amount]==INT_MAX-1)?-1:t[n][amount];
}
int main()
{
    vector<int> a;int amount;
    a={1,2,5};
    amount=11;
    int k=coinChange(a,amount);
    cout<<k<<endl;
    return 0;
}