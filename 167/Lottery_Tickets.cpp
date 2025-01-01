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

ll calculateWinningNumbers(vector<int> &tickets)
{
   int A1 = tickets[0];
   sort(tickets.begin(), tickets.end());

   auto it = lower_bound(tickets.begin(), tickets.end(), A1);
   int index = distance(tickets.begin(), it);

   ll left_bound = (index == 0) ? 1 : (A1 + tickets[index - 1] + 1) / 2;
   ll right_bound = (index == tickets.size() - 1) ? 1000000 : (A1 + tickets[index + 1]) / 2;

   return max(0LL, right_bound - left_bound + 1);
}
void solve()
{
   vt;
   for (int i = 0; i < n; i++)
   {
      in v[i];
   }
   ot calculateWinningNumbers(v) nd;
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