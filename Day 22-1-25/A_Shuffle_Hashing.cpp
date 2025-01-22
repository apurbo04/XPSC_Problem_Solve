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
   string p, h, n;
   in p >> h;
   sort(p.begin(), p.end());
   int n1 = p.size(), n2 = h.size();
   bool f = 0;
   for (int i = 0; i <= n2 - n1; i++)
   {
      n = h.substr(i, n1);
      ot n nd;
      sort(begin(n), end(n));
      if (n == p)
      {
         f = 1;
      }
   }
   if (f)
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