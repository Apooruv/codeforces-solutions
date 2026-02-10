#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> s(n), t(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        for (int i = 0; i < n; i++)
            cin >> t[i];
        int k = 0;
        unordered_map<int, int> a;
        for (int i : t)
        {
            a[i]++;
        }
        if (k % 2 == 0)
            for (auto &i : a)
            {
            }
    }
}