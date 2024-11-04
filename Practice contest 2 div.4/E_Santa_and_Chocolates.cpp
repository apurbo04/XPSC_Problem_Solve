#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t;
     cin >> t;
     while (t--)
     {
          int n, k;
          cin >> n >> k;
          vector<int> v(n);
          long long sum = 0;
          for (int i = 0; i < n; i++)
          {
               cin >> v[i];
               sum += v[i];
          }
          int x;
          if (sum % n == 0)
               x = sum / n;
          else
               x = n / sum + 1;

          if (sum - (k * x) >= (n - x))
               cout << "YES" << endl;
          else
               cout << "NO" << endl;
     }
     return 0;
}