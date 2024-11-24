#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n";
#define yes cout << "YES\n";
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t;
     in t;
     while (t--)
     {
          int n;
          in n;
          string s, ans = "";
          in s;
          int i = 0;
          while (i < n)
          {
               if (i + 2 < n && s[i + 2] == '0' && (i + 3 >= n || s[i + 3] != '0'))
               {
                    int num = ((s[i] - '0') * 10 + (s[i + 1] - '0'));
                    ans.push_back((char)(96 + num));
                    i += 3;
               }
               else
               {
                    int num = (s[i] - '0');
                    ans.push_back((char)(96 + num));
                    i++;
               }
          }
          ot ans << endl;
     }
     return 0;
}
// Apurbo04