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
   vt;
   string ans = "";
   bool f = 0;
   vector<int> tem;
   for (int i = 0; i < n; i++)
   {
      in v[i];
      if (tem.empty())
      {
         ans += '1';
         tem.push_back(v[i]);
      }
      else
      {
         if (f)
         {
            if (v[i] < tem.back())
               ans += '0';
            else
            {
               if (v[i] > tem[0])
                  ans += '0';
               else
               {
                  ans += '1';
                  tem.push_back(v[i]);
               }
            }
         }
         else
         {
            if (v[i] >= tem.back())
            {
               ans += '1';
               tem.push_back(v[i]);
            }
            else
            {
               if (v[i] > tem[0])
                  ans += '0';
               else
               {
                  f = 1;
                  ans += '1';
                  tem.push_back(v[i]);
               }
            }
         }
      }
   }

   ot ans nd;
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