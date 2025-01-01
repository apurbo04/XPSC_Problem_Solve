#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define nd << endl;
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
   int n;
   in n;
   string s;
   in s;
   int z = 0, o = 0;
   for (int i = 0; i < n; i++)
   {
      if (s[i] == '0')
         z++;
      else
         o++;
   }
   if (o == 0)
   {
      ot z nd;
   }
   else if (z == 0)
   {
      ot o nd;
   }
   else
   {
      ot 1 nd;
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