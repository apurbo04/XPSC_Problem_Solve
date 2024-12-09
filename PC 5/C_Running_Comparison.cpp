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
   vector<int> a(n);
   vector<int> b(n);
   for (int i = 0; i < n; i++)
   {
      in a[i];
   }
   for (int i = 0; i < n; i++)
   {
      in b[i];
   }
   int ans = 0;
   for (int i = 0; i < n; i++)
   {
      if (a[i] > b[i] && b[i] * 2 > a[i])
         ans++;
      if (b[i] > a[i] && a[i] * 2 > b[i])
         ans++;
      if (a[i] == b[i])
         ans++;
      if (a[i] * 2 == b[i] || b[i] * 2 == a[i])
         ans++;
   }
   ot ans nd;
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