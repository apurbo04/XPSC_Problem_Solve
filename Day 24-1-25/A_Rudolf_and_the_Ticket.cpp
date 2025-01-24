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
   int n, m, k;
   in n >> m >> k;
   vector<int> b(n), c(m);
   for (int i = 0; i < n; i++)
   {
      in b[i];
   }
   for (int i = 0; i < m; i++)
   {
      in c[i];
   }
   int ans = 0;
   sort(b.begin(), b.end());
   sort(c.begin(), c.end());
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < m; j++)
      {
         if (b[i] + c[j] <= k)
            ans++;
         else
            break;
      }
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