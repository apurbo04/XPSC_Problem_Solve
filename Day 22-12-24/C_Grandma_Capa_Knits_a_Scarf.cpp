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
   int n;
   in n;
   string s;
   in s;
   int ans = 1e9;
   for (char i = 'a'; i <= 'z'; i++)
   {
      int change = 0;
      int l = 0, r = n - 1;
      while (l <= r)
      {
         if (s[l] != s[r])
         {
            if (s[l] == i)
            {
               l++;
               change++;
            }
            else if (s[r] == i)
            {
               r--;
               change++;
            }
            else
            {
               change = 1e9;
               break;
            }
         }
         else
         {
            l++;
            r--;
         }
      }
      ans = min(ans, change);
   }
   if(ans == 1e9) ot -1 nd;
   else ot ans nd;
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