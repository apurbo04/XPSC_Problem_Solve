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
   string s;
   in n >> s;
   int removable_pairs = 0;
   stack<char> st;
   for (int i = 0; i < n; i++)
   {
      if (st.empty())
      {
         st.push(s[i]);
         continue;
      }
      char ch = st.top();
      if (ch != s[i])
      {
         st.pop();
         removable_pairs++;
      }
      else
         st.push(s[i]);
   }

   if (removable_pairs % 2 == 0)
   {
      ot "Ramos" nd;
   }
   else
   {
      ot "Zlatan" nd;
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