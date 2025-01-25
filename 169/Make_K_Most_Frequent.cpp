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
   int n, k;
   in n >> k;
   vector<int> v(n);
   vector<int> cnt(21);
   for (int i = 0; i < n; i++)
   {
      in v[i];
      cnt[v[i]]++;
   }
   int mx_cnt = *max_element(cnt.begin(), cnt.end());
   if (cnt[k] == mx_cnt)
   {
      ot 0 nd;
      return;
   }

   vector<int> cnt_pre = cnt;
   for (int i = 0; i < n; i++)
   {
      mx_cnt = *max_element(cnt_pre.begin(), cnt_pre.end());
      if (cnt_pre[k] == mx_cnt)
      {
         ot 1 nd;
         return;
      }
      cnt_pre[v[i]]--;
   }
   
   vector<int> cnt_suff = cnt;
   for (int i = 0; i < n; i++)
   {
      mx_cnt = *max_element(cnt_suff.begin(), cnt_suff.end());
      if (cnt_suff[k] == mx_cnt)
      {
         ot 1 nd;
         return;
      }
      cnt_suff[v[i]]--;
   }
   ot 2 nd;

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