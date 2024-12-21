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
   vector<int> ans(n);
   ans[0] = abs(v[0] - v[1]);
   for (int i = 1; i < n - 1; i++)
   {
      int b = v[i] - v[i + 1];
      int c = v[i] - v[i - 1];
      ans[i] = max(abs(b), abs(c));
   }
   ans[n - 1] = abs(v[n - 1] - v[n - 2]);
   sort(ans.begin(), ans.end());
   ot ans[0] nd;
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