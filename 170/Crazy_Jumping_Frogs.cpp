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
   int even = 0, odd = 0;
   for (int i = 0; i < n; i++)
   {
      if (v[i] % 2 == 0)
         even++;
      else
         odd++;
   }
   ot max(even, odd) nd;
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