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
   vt; // Read the array size and initialize the vector
   for (int i = 0; i < n; i++)
   {
      in v[i]; // Read the array elements
   }

   int max_val = v[n - 1]; // Start from the last element
   int seconds = 0;

   // Traverse from right to left to calculate the number of updates
   for (int i = n - 2; i >= 0; --i)
   {
      if (v[i] > max_val)
      {
         max_val = v[i];
         ++seconds; // Increment seconds when max_val changes
      }
   }

   ot seconds nd; // Output the result
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
