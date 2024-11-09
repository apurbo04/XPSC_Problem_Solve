#include <bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin >> t;
     while (t--)
     {
          int n, x;
          cin >> n >> x;
          vector<int> va(n);
          vector<int> vb(n);
          for (int i = 0; i < n; i++)
               cin >> va[i];
          for (int i = 0; i < n; i++)
               cin >> vb[i];

          vector<int> dif(n);
          for (int i = 0; i < n; i++)
          {
               dif[i] = va[i] - vb[i];
          }
          sort(dif.begin(), dif.end(), greater<int>());

          for (int i = 0; i < n; i++)
          {
               if (x <= 0)
                    break;
               if (dif[i] <= 0)
               {
                    if (dif[i] == 0)
                    {
                         x--;
                         dif[i] = 1;
                    }
                    else
                    {
                         x -= min(x, abs(dif[i]));
                         if (x > 0)
                         {
                              x--;
                              dif[i] = 1;
                         }
                    }
               }
          }
          int count = 0;
          for (int i = 0; i < n; i++)
          {
               if (dif[i] > 0)
                    count++;
          }
          if (count > n / 2)
               cout << "YES" << endl;
          else
               cout << "NO" << endl;
     }
     return 0;
}
