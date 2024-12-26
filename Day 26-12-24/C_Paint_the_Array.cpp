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
   int n;
   in n;
   vector<ll> v(n);
   for (int i = 0; i < n; i++)
      in v[i];

   ll G1 = 0, G2 = 0;
   for (int i = 0; i < n; i += 2)
   {
      G1 = __gcd(G1, v[i]);
   }

   for (int i = 1; i < n; i += 2)
   {
      G2 = __gcd(G2, v[i]);
   }

   ll ans = 0;
   bool ok = 1;
   for (int i = 1; i < n; i += 2)
   {
      if (v[i] % G1 == 0)
         ok = 0;
   }
   if (ok)
      ans = G1;
   else
   {
      ok = 1;
      for (int i = 0; i < n; i += 2)
      {
         if (v[i] % G2 == 0)
            ok = 0;
      }
      if (ok)
         ans = G2;
   }
   ot ans nd;
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