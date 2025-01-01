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
bool isValid(int64_t R0, int N, const vector<int64_t> &A, const vector<int64_t> &B)
{
   int64_t R = R0;
   for (int i = 0; i < N; i++)
   {
      if (R <= A[i])
      {
         R += B[i];
      }
      R--;
      if (R < 0)
         return false;
   }
   return true;
}

void solve()
{
   int N;
   cin >> N;

   vector<int64_t> A(N), B(N);
   for (int i = 0; i < N; i++)
      cin >> A[i];
   for (int i = 0; i < N; i++)
      cin >> B[i];

   int64_t low = 0, high = 1e12, result = -1;
   while (low <= high)
   {
      int64_t mid = low + (high - low) / 2;
      if (isValid(mid, N, A, B))
      {
         result = mid;
         high = mid - 1;
      }
      else
      {
         low = mid + 1;
      }
   }
   ot result nd;
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