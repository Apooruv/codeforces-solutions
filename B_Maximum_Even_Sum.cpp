#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ff first
#define ss second

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll b, a;
        cin >> b >> a;
        ll sol = -1;
        if (((a + b) & 1LL) == 0)
            sol = a + b;
        if (a % 2 == 1 && b % 2 == 1)
            sol = max(sol, a * b + 1);
        else if (a % 2 == 0 && (a % 4 == 0 || b % 2 == 0))
            sol = max(sol, 2 + (a * b) / 2);
        cout << sol << "\n";
    }
}
