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

bool isPrime(int n)
{
   if (n == 1)
      return false;
   for (int i = 2; i * i <= n; i++)
   {
      if (n % i == 0)
         return false;
   }
   return true;
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int n;
   in n;
   if (isPrime(n))
      ot 1 nd;
   else if (n % 2 == 0)
      ot 2 nd;
   else
   {
      if (isPrime(n - 2))
         ot 2 nd;
      else
         ot 3 nd;
   }
   return 0;
}

// Apurbo04