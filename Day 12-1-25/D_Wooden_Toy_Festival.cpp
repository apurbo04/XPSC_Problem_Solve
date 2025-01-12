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
   vt;
   for (int i = 0; i < n; i++)
   {
      in v[i];
   }
   sort(v.begin(), v.end());

   auto ok = [&](int time)
   {
      int cnt = 1, l = 0;
      for (int r = 0; r < n; r++)
      {
         if ((v[r] - v[l]) > 2 * time)
         {
            l = r;
            cnt++;
         }
      }
      return cnt<=3;
   };

   int l = 0, r = 1e9, mid, ans;
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