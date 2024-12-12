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
const int B = 30;
void solve()
{
   int n, K;
   in n >> K;
   vector<int> a(n);

   for (int i = 0; i < n; i++)
   {
      in a[i];
   }

   vector<int> bits(B + 1);
   for (int i = 0; i < n; i++)
   {
      for (int k = B; k >= 0; k--)
      {
         if ((a[i] >> k) & 1)
         {
            bits[k]++;
         }
      }
   }

   int ans = 0;
   for (int k = B; k >= 0; k--)
   {
      if (bits[k] == n)
      {
         ans += (1LL << k);
      }
      else
      {
         int need = n - bits[k];
         if (K >= need)
         {
            ans += (1LL << k);
            K -= need;
         }
      }
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