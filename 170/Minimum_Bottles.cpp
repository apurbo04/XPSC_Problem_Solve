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
   int n, k;
   in n >> k;
   ll sum = 0;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
      in v[i];
      sum += v[i];
   }
   if (k >= sum)
      ot 1 nd;
   else
   {
      if (sum % k == 0)
         ot(sum / k) nd;
      else
         ot(sum / k) + 1 nd;
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