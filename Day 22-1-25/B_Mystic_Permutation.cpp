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
   if (n == 1)
   {
      ot - 1 nd;
      return;
   }
   vector<int> ans = {v.begin(), v.end()};
   sort(ans.begin(), ans.end());
   for (int i = 0; i < n - 1; i++)
   {
      if (ans[i] == v[i])
         swap(ans[i], ans[i + 1]);
   }

   if (ans[n - 1] == v[n - 1])
      swap(ans[n - 1], ans[n - 2]);
   
   for (int i = 0; i < n; i++)
   {
      ot ans[i] << " ";
   }
   cout nd;
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