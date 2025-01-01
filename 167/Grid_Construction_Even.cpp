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
   int b = n, c = 1;
   for (int i = 0; i < n; i++)
   {
      if (i % 2 != 0)
      {
         v[i] = c;
         c++;
      }
      else
      {
         v[i] = b;
         b--;
      }
   }
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         ot v[(j + i) % n] << " ";
      }
      cout nd;
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