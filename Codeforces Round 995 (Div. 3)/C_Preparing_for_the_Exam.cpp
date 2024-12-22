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

   vector<int> a(m), q(k);
   for (int i = 0; i < m; i++)
      in a[i];

   unordered_set<int> known;
   for (int i = 0; i < k; i++)
      in q[i], known.insert(q[i]);

   string ans;
   if (m == k)
   {
      for (int i = 0; i < m; i++)
      {
         if (a[i] == q[i])
            ans += "1";
         else
            ans += "0";
      }
   }
   else
   {
      for (int i = 0; i < m; i++)
      {
         bool pass = true;
         if (known.size() < n - 1 || known.find(a[i]) != known.end())
         {
            pass = false;
         }
         ans += (pass ? "1" : "0");
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