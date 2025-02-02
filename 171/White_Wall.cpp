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
   string a = "RGB";
   string b = "RBG";
   string c = "GRB";
   string d = "GBR";
   string e = "BRG";
   string f = "BGR";

   int cnt1 = 0;
   int cnt2 = 0;
   int cnt3 = 0;
   int cnt4 = 0;
   int cnt5 = 0;
   int cnt6 = 0;

   int j = 0;
   for (int i = 0; i < n; i++)
   {
      if (a[j] != s[i])
         cnt1++;
      if (b[j] != s[i])
         cnt2++;
      if (c[j] != s[i])
         cnt3++;
      if (d[j] != s[i])
         cnt4++;
      if (e[j] != s[i])
         cnt5++;
      if (f[j] != s[i])
         cnt6++;
      j++;
      if (j == 3)
         j = 0;
   }
   ot min({cnt1, cnt2, cnt3, cnt4, cnt5, cnt6}) nd;
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