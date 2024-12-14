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
const int maxN = (1LL << 15);

vector<int> allPlaindrome;
bool isPalindrome(int x)
{
   string s = to_string(x), t;
   t = s;
   reverse(t.begin(), t.end());
   return s == t;
}

void markPlaindrome()
{
   for (int i = 0; i < maxN; i++)
   {
      if (isPalindrome(i)){
         allPlaindrome.push_back(i);
      }
   }
}

void solve()
{
   int n;
   in n;
   vector<int> v(n),cnt(maxN+1);
   for (int i = 0; i < n; i++)
   {
      in v[i];
      cnt[v[i]]++;
   }
   
   ll ans = n;
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < allPlaindrome.size(); j++)
      {
         int curr = (v[i] ^ allPlaindrome[j]);
         ans += cnt[curr];
      }
   }
   ot ans/2 nd;
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
   markPlaindrome();

   int t;
   in t;
   while (t--)
   {
      solve();
   }
   return 0;
}

// Apurbo04