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
   string s, t;
   in s >> t;
   if (s == t || s[0] == '1')
   {
      yes;
      return;
   }

   int pos = -1;
   for (int i = 0; i < n; i++)
   {
      if (s[i] == '1')
      {
         pos = i;
         break;
      }
   }
   if (pos != -1)
   {
      bool ok = true;
      for (int i = 0; i < n; i++)
      {
         if (s[i] != t[i])
         {
            if (pos > i)
            {
               ok = false;
               break;
            }
         }
      }
      if (ok)
         yes;
      else
         no;
   }
   else
   {
      no;
   }
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