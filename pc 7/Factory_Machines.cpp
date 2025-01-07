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

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   ll n, t;
   in n >> t;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
      in v[i];
   }

   auto total_product = [&](ll sec)
   {
      ll cnt = 0;
      for (int i = 0; i < n; i++)
      {
         cnt += (sec / v[i]);
         if (cnt >= t)
            return true;
      }
      return cnt >= t;
   };

   ll l = 1, r = 1e18, mid, ans;
   while (l <= r)
   {
      mid = l + (r - l) / 2;
      if (total_product(mid))
      {
         ans = mid;
         r = mid - 1;
      }
      else
         l = mid + 1;
   }
   ot ans;
   return 0;
}

// Apurbo04