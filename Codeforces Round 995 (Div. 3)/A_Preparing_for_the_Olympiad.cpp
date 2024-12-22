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
   vector<int> a(n), b(n);
   ll sum = 0, sum2 = 0;
   for (int i = 0; i < n; i++)
   {
      in a[i];
   }
   for (int i = 0; i < n; i++)
      in b[i];
   for (int i = 0; i < n - 1; i++)
   {
      if (a[i] > b[i + 1])
      {
         sum += a[i];
         sum2 += b[i + 1];
      }
   }
   sum += a[n - 1];
   ot sum - sum2 nd;
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