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
const ll MOD = 1e9 + 7;
ll power(ll x, ll y)
{
   ll ans = 1 % MOD;
   while (y)
   {
      if (y & 1)
      {
         ans = (1LL * ans % MOD * x % MOD) % MOD;
      }
      x = 1LL * x * x % MOD;
      y >>= 1;
   }
   return ans;
}
void solve()
{
   vt;
   for (int i = 0; i < n; i++)
   {
      in v[i];
   }
   ll ib = 0, s = 0;
   for (int i = 0; i < n; i++)
   {
      ib += v[i];
      s += abs(ib);
   }
   ot s nd;
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