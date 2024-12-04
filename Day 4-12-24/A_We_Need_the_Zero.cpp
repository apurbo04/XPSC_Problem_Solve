#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n";
#define yes cout << "YES\n";
#define vt     \
     int n;    \
     cin >> n; \
     vector<int> v(n);
#define nd << '\n';

using namespace std;
void solve()
{
     vt int ans = -1, cnt = 0;
     for (int i = 0; i < n; i++)
     {
          ans ^= v[i]; // Compute XOR of all elements
          cnt++;
     }
     if (ans == 0)
     {
          ot cnt nd
     }
     else
     {
          ot ans nd;
     }
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

// Apurbo04