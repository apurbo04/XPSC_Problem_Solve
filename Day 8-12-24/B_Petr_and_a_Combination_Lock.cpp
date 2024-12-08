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

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   vt;
   for (int i = 0; i < n; i++)
   {
      in v[i];
   }
   bool f = 0;
   for (int mask = 0; mask < (1 << n); mask++)
   {
      int sum = 0;
      for (int k = 0; k < n; k++)
      {
         if ((mask >> k) & 1)
            sum += v[k];
         else
            sum -= v[k];
      }

      if (sum % 360 == 0)
      {
         f = 1;
         break;
      }
   }
   if (f)
      yes;
   else
      no;
   return 0;
}

// Apurbo04