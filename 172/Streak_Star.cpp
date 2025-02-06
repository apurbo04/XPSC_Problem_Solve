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

int calculateStreak(const vector<int> &arr)
{
   int maxStreak = 1;
   int currentStreak = 1;
   for (int i = 1; i < arr.size(); i++)
   {
      if (arr[i] >= arr[i - 1])
      {
         currentStreak++;
         maxStreak = max(maxStreak, currentStreak);
      }
      else
      {
         currentStreak = 1;
      }
   }
   return maxStreak;
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   in t;
   while (t--)
   {
      int N, X;
      in N >> X;
      vector<int> A(N);
      for (int i = 0; i < N; i++)
      {
         in A[i];
      }
      int originalStreak = calculateStreak(A);
      int maxStreak = originalStreak;

      for (int i = 0; i < N; i++)
      {
         int originalValue = A[i];
         A[i] *= X;
         int currentStreak = calculateStreak(A);
         maxStreak = max(maxStreak, currentStreak);
         A[i] = originalValue;
      }
      ot maxStreak nd;
   }
   return 0;
}

// Apurbo04