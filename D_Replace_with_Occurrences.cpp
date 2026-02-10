/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> b(n);
        for(int i=0;i<n;i++)
        cin>>b[i];
        unordered_set<int> a;int sum=0;vector<int> s;
        for(int i:b)
        {
            if(a.find(i)==a.end())
            {
                s.push_back(i);
                sum+=i;
               a.insert(i);
            }
        }
        if(sum!=n)
        {
            cout<<-1<<endl;
            continue;
        }
        int j=1;
        for(int i:s)
        {
            while(i--)
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
    }
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];
        unordered_map<int, vector<int>> pos;
        for (int i = 0; i < n; i++) 
        {
            pos[b[i]].push_back(i);
        }
        bool s = true;
        vector<int> a(n);
        int m = 1;

        for (auto &p : pos) 
        {
            int f = p.first;
            auto &k = p.second;
            if (k.size() % f != 0) 
            {
                s = false;
                break;
            }
            for (int i = 0; i < (int)k.size(); i++) 
            {
                a[k[i]] = m;
                if ((i + 1) % f == 0) 
                m++;
            }
        }

        if (!s) 
        {
            cout << -1 << "\n";
        } 
        else 
        {
            for (int x : a) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
