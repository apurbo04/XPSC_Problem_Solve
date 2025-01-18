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
   int n;
   in n;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
      in v[i];
   }
   map<int, int> cnt;
   for (int i = 0; i < n; i++)
   {
      for (int j = 2; j * j <= v[i]; j++)
      {
         if (v[i] % j == 0)
         {
            while (v[i] % j == 0)
            {
               cnt[j]++;
               v[i] /= j;
            }
         }
      }
      if (v[i] > 1)
         cnt[v[i]]++;
   }
   bool ok = true;
   for (auto [x, y] : cnt)
   {
      if (y % n != 0)
      {
         ok = false;
         break;
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