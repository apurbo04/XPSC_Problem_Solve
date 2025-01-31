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

void findMissingCount(int N, int arr[])
{
   unordered_set<int> present(arr, arr + N);
   int missingCount = 0;

   for (int i = 1; i <= N; i++)
   {
      if (present.find(i) == present.end())
      {
         missingCount++;
      }
   }

   ot missingCount nd;
}
void solve()
{
   int N;
   in N;
   int arr[N];

   for (int i = 0; i < N; i++)
   {
      in arr[i];
   }

   findMissingCount(N, arr);
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