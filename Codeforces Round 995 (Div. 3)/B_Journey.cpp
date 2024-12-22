#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define vt   \
   int n;    \
   cin >> n; \
   vector<int> v(n)
#define nd << '\n'

using namespace std;

void solve()
{
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
    {
        in v[i];
    }

    ll m = v[0];
    ll sum_other = v[1] + v[2] + v[3];

    if (m <= 0)
    {
        ot 0 nd;
        return;
    }

    ll cycles = m / sum_other; 
    ll sum = cycles * sum_other;
    ll cnt = cycles * 3; 

    for (int i = 1; i <= 3 && sum < m; i++)
    {
        sum += v[i];
        cnt++;
    }

    ot cnt nd;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    in t;
    while (t--)
    {
        solve();
    }
    return 0;
}
