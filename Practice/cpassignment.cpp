#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int poisonousPlants(vector<int>& p){
    stack<pair<int,int>> st;
    int ans=0;
    for(int x:p){
        int days=0;
        while(!st.empty()&&x<=st.top().first){
            days=max(days,st.top().second);
            st.pop();
        }
        if(st.empty())days=0;
        else days++;
        ans=max(ans,days);
        st.push({x,days});
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    cout<<poisonousPlants(p)<<"\n";
}
