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
   vector<ll> a(n), b(n);
   for (int i = 0; i < n; i++)
   {
      in a[i];
   }
   for (int i = 0; i < n; i++)
   {
      in b[i];
   }
   bool f = 1;
   ll z = 0;
   set<ll> s;
   for (int i = 0; i < n; i++)
   {
      if (a[i] < b[i])
      {
         f = 0;
         break;
      }
      if (b[i] == 0)
         z = max(z, a[i]);
      else
         s.insert(a[i] - b[i]);
   }
   if (!f)
   {
      no;
      return;
   }
   if (s.size() > 1)
      no;
   else if (!s.empty() && *s.begin() < z)
      no;
   else
      yes;
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