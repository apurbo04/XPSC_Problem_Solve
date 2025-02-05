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
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   in n;
   map<int, int> d;
   for (int i = 1; i <= n; i++)
   {
      int l, r;
      in l >> r;
      d[l]++;
      d[r + 1]--;
   }

   ll sum = 0;
   bool ok = true;
   for (auto [key, value] : d)
   {
      sum += value;
      if (sum > 2)
      {
         ok = false;
         break;
      }
   }

   if (ok)
      yes;
   else
      no;

   return 0;
}

// Apurbo04