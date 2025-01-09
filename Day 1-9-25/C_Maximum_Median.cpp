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
   int n, k;
   in n >> k;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
      in v[i];
   }

   auto ok = [&](ll median)
   {
      ll cnt = 0;
      for (int i = (n / 2); i < n; i++)
      {
         cnt += (v[i] < median ? (median - v[i]) : 0);
      }
      return cnt <= k;
   };

   sort(v.begin(), v.end());
   
   int l = 1, r = 2e9, mid, ans;
   while (l <= r)
   {
      mid = l + (r-l) / 2;
      if (ok(mid))
      {
         ans = mid;
         l = mid + 1;
      }
      else
      {
         r = mid - 1;
      }
   }
   ot ans nd;
   return 0;
}

// Apurbo04