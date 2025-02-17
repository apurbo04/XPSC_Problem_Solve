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
   for (int i = 1; i < n; i++)
   {
      in v[i];
   }

   bool ok = false;
   for (int i = 2; i <= n; i++)
   {
      if (v[1] != v[i])
         ok = true;
   }
   if (ok)
   {
      yes;
      int city = -1;
      for (int i = 2; i <= n; i++)
      {
         if (v[1] != v[i])
         {
            ot 1 << " " << i nd;
            city = i;
         }
      }

      for (int i = 2; i <= n; i++)
      {
         if (v[1] == v[i])
            ot city << " " << i nd;
      }
   }
   else
      no;
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