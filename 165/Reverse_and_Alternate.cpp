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
   int zero_zero = 0, one_one = 0;
   for (int i = 0; i < n - 1; i++)
   {
      if (s[i] == '1' && s[i + 1] == '1')
         one_one++;
      else if (s[i] == '0' && s[i + 1] == '0')
         zero_zero++;
   }
   if (zero_zero == 0 && one_one == 0)
   {
      yes;
      return;
   }
   if (zero_zero >= 2 || one_one >= 2)
   {
      no;
      return;
   }
   if (zero_zero == 1 && one_one == 1)
   {
      yes;
      return;
   }
   if (zero_zero == 1)
   {
      if (s[0] == '1' || s[n - 1] == '1')
         yes;
      else
         no;
   }
   else
   {
      if (s[0] == '0' || s[n - 1] == '0')
         yes;
      else
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