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
void binarySearch(vector<int> v, int size, int t)
{
   int l = 0, r = size - 1;
   // bool f = 1;
   while (l <= r)
   {
      int m = l + (r - l) / 2;
      if (v[m] == t)
      {
         yes;
         return;
      }
      else if (v[m] > t)
         r = m - 1;
      else
         l = m + 1;
   }
   no;
   return;
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