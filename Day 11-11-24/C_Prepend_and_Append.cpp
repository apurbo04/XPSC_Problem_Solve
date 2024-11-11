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
          string s;
          cin >> s;
          int i = 0, j = n - 1;
          int ans = n;
          while (i <= j)
          {
               // if ((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0'))
               if(s[i]!=s[j])
               {
                    ans -= 2;
                    i++;
                    j--;
               }
               else
               {
                    break;
               }
          }
          cout << ans << endl;
     }
     return 0;
}