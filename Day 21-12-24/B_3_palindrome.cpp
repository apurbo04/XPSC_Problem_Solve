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
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   in n;
   deque<char> dq;
   dq.push_back('b');
   dq.push_back('b');
   dq.push_back('a');
   dq.push_back('a');

   while (n--)
   {
      ot dq[dq.size() - 1];
      dq.push_front(dq[dq.size() - 1]);
      dq.pop_back();
   }

   return 0;
}

// Apurbo04