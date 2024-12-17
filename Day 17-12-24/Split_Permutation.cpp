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
   if (n % 2 == 0)
   {
      for (int i = 1; i <= n / 2; i++)
      {
         ot i << " " << n - i + 1 << " ";
      }
   }
   else
   {
      for (int i = 1; i <= n / 2; i++)
      {
         ot i << " " << n - i << " ";
      }
      ot n;
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