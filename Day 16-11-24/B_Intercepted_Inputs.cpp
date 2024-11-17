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
          int n;
          cin >> n;
          vector<int> v(n);

          for (int i = 0; i < n; i++)
          {
               cin >> v[i];
          }

          int nm = n - 2;
          unordered_map<int, int> seen;
          bool found = false;

          for (int i = 0; i < n; i++)
          {
               if (nm % v[i] == 0)
               {
                    int target = nm / v[i];
                    if (seen.count(target))
                    {
                         cout << target << " " << v[i] << endl;
                         found = true;
                         break;
                    }
               }
               seen[v[i]] = i;
          }
     }

     return 0;
}
