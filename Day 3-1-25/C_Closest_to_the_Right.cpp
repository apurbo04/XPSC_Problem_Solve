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
void binarySearch(vector<int> v, int size, int key)
{
   int l = 0, r = size - 1, ans = size;
   while (l <= r)
   {
      int m = (r + l) / 2;
      if (key <= v[m])
      {
         ans = m;
         r = m - 1;
      }
      else
         l = m + 1;
   }
   ot(ans + 1) nd;
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n, k;
   cin >> n >> k;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
      cin >> v[i];
   }
   while (k--)
   {
      int t;
      in t;
      binarySearch(v, n, t);
   }
   return 0;
}

// Apurbo04