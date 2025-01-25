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
   bool ok = true;
   for (int i = 0; i < n; i++)
   {
      if (v[i] != i + 1)
      {
         int x = __builtin_popcount(v[i]);
         int y = __builtin_popcount(i + 1);
         if (x != y)
         {
            ok = false;
            break;
         }
      }
   }
   if (ok)
      yes;
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