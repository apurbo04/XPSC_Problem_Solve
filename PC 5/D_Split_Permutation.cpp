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
   if (n > 4)
   {
      for (int i = 1; i <= n; i++)
      {
         if (i != n / 2 + 1)
            ot i << " ";
      }
      cout nd;
   }
   else
   {
      for (int i = 1; i <= n; i++)
      {
         ot i << " ";
      }
      cout nd;
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