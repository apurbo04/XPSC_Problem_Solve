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
   int x, y, k;
   in x >> y >> k;
   ll sum = 0;
   while (k--)
   {
      ll gcd = __gcd(x, y);
      if (x >= y)
      {
         x = gcd;
         x = (x / __gcd(x, y)) * y;
      }
      else
      {
         y = gcd;
         y = (x / __gcd(x, y)) * y;
      }
   }
   sum += (x + y);
   ot sum nd;
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