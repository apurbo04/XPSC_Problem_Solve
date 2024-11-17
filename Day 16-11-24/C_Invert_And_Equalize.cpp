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
          char c = s[0];
          bool flag  = true;
          int cnt=0;
          for (int i = 1; i < n - 1; i++)
          {
               if(s[i]!=c)
               {
                    if(flag)cnt++;
                    flag = false;
               }
               else
               {
                    flag = true;
               }
          }
          cout<<cnt<<endl;
     }
     return 0;
}