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
   int n, q;
   cin >> n >> q;
   vector<int> v(n + 1), prefix(n + 1);
   for (int i = 1; i <= n; i++)
   {
      cin >> v[i];
   }
   sort(v.begin(), v.end(), greater<int>());
   prefix[0] = 0;
   for (int i = 1; i <= n; i++)
   {
      prefix[i] = prefix[i - 1] + v[i - 1];
   }

   while (q--)
   {
      int x, ans = -1;
      in x;
      auto it = lower_bound(prefix.begin(), prefix.end(), x);
      if (it != prefix.end())
      {
         ans = it - prefix.begin();
      }
      ot ans nd;
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