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
   vector<int> v(n);
   map<int, int> tmp;
   for (int i = 0; i < n; i++)
   {
      in v[i];
      tmp[v[i]]++;
   }
   vector<pair<int, int>> cnt;
   for (auto [vi, c] : tmp)
   {
      cnt.emplace_back(c, vi);
   }
   sort(cnt.begin(), cnt.end());
   reverse(cnt.begin(), cnt.end());

   while (true)
   {
      if (cnt.back().first <= k and cnt.size() > 1)
      {
         k -= cnt.back().first;
         cnt.pop_back();
      }
      else
         break;
   }
   ot cnt.size() nd;
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