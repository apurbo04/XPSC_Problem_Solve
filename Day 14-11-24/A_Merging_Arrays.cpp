#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int n, m;
     cin >> n >> m;
     vector<int> a(n);
     vector<int> b(m);
     vector<int> c(n + m);
     for (int i = 0; i < n; i++)
     {
          cin >> a[i];
     }
     for (int i = 0; i < m; i++)
     {
          cin >> b[i];
     }
     // a.push_back(INT_MAX);
     // b.push_back(INT_MAX);
     int i = 0, j = 0, k = 0;
     while (i < n || j < m)
     {
          // if (j == m || (i < n && a[i] < b[j]))
          if (a[i] < b[j])
          {
               c[k++] = a[i++];
          }
          else
               c[k++] = b[j++];
     }
     for (auto it : c)
          cout << it << " ";
     cout << "\n";

     return 0;
}