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
   int n, k;
   in n >> k;

   auto ok = [&](int mid)
   {
      return (mid - (mid / n) >= k);
   };

   int l = 1, r = 2e9, mid, ans;
   while (l <= r)
   {
      mid = l + (r - l) / 2;
      if (ok(mid))
      {
         ans = mid;
         r = mid - 1;
      }
      else
         l = mid + 1;
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