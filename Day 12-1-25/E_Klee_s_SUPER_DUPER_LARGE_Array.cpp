#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
   int n, k;
   cin >> n >> k;

   vector<int> pre(n + 1, 0); // Adjust size to n + 1
   pre[0] = 2;               // Base case
   for (int i = 1; i < n; i++) // Loop only up to n - 1
   {
      pre[i] = pre[i - 1] + 1;
   }

   int l = k, r = k + (n - 1), mid, ans = INT_MAX, bestMid = -1;
   while (l <= r)
   {
      mid = l + (r - l) / 2;
      int diff = pre[r] - pre[mid]; // Calculate the difference
      if (diff < ans)              // Minimize the difference
      {
         ans = diff;
         bestMid = mid;
      }
      if (diff > ans)
         r = mid - 1;
      else
         l = mid + 1;
   }
   cout << bestMid << '\n'; // Output the best mid
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--)
   {
      solve();
   }
   return 0;
}
