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
   vector<ll> v(n + 1);
   for (int i = 1; i <= n; i++)
   {
      in v[i];
   }

   sort(v.begin(), v.end());
   ll sum = 0;
   for (int i = 1; i <= n; i++)
   {
      sum += v[i];
   }
   ll ans = sum;
   for (ll i = 1; i <= n; i++)
   {
      sum -= v[i];
      ans = max(ans, sum + (i * i));
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