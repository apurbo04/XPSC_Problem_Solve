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
   int min_def = INT_MAX;
   for (int i = 1; i <= x; i++)
   {
      for (int j = 1; j <= y; j++)
      {
         int perimeter = 2 * (i + j);
         int deference = abs(k - perimeter);
         min_def = min(deference, min_def);
      }
   }
   ot min_def nd;
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