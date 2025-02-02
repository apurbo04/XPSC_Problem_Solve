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
   int n, p;
   in n >> p;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
   {
      in a[i];
   }

   vector<int> l(n);
   vector<int> r(n);
   int h = 1e9;
   for (int i = 0; i < n; i++)
   {
      if (a[i] == 0)
      {
         h = 0;
         l[i] = 0;
      }
      else if (a[i] < h)
      {
         l[i] = h;
      }
      else
      {
         l[i] = a[i];
         h = a[i];
      }
   }

   for (int i = n - 1; i >= 0; i--)
   {
      if (a[i] == 0)
      {
         h = 0;
         r[i] = 0;
      }
      else if (a[i] < h)
      {
         r[i] = h;
      }
      else
      {
         r[i] = a[i];
         h = a[i];
      }
   }

   for (int i = 0; i < n; i++)
   {
      int mn = min(l[i], r[i]);

      ot(mn + p - 1) / p << " ";
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