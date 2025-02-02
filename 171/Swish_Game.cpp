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
   int m, k;
   in m >> k;
   string s;
   in s;

   int cnt = 0;
   for (int i = 0; i < m; i++)
   {
      if (s[i] == 'S')
         cnt++;
   }

   if (cnt >= k)
      ot m nd;
   else
   {
      int need = k - cnt;
      ot m + (need - 1) nd;
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