#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define vt     \
     int n;    \
     cin >> n; \
     vector<int> v(n)
#define nd << '\n'

using namespace std;
const int MOD = 1e9 + 7;

int power(int x, int n)
{
     int ans = 1 % MOD;
     while (n)
     {
          if (n & 1)
               ans = (1LL * ans % MOD * x % MOD) % MOD;
          x = 1LL * x * x % MOD;
          n >>= 1;
     }
     return ans;
}
void solve()
{
     int a, b;
     in a >> b;
     ot power(a, b) nd;
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
