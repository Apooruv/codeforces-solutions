#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define pb push_back

string median(multiset<int> &s)
{
    int n = s.size();
    if (!n)
        return "Wrong!";
    auto it = next(s.begin(), n / 2);
    double m = (n & 1) ? *it : (*it + *prev(it)) / 2.0;
    stringstream ss;
    ss << fixed << setprecision(1) << m;
    string res = ss.str();
    if (res.size() >= 2 && res.substr(res.size() - 2) == ".0")
        res = res.substr(0, res.size() - 2);
    return res;
}

int main()
{
    int n;
    cin >> n;
    multiset<int> s;
    vector<string> ans;
    while (n--)
    {
        char op;
        int x;
        cin >> op >> x;
        if (op == 'a')
            s.insert(x);
        else if (op == 'r')
        {
            auto it = s.find(x);
            if (it != s.end())
                s.erase(it);
            else
            {
                ans.pb("Wrong!");
                cout << "Wrong!\n";
                continue;
            }
        }
        string res = median(s);
        ans.pb(res);
        cout << res << "\n";
    }
}
