#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   // O(n)
   // int n;
   // cin >> n;
   // for (int i = 1; i <= n; i++)
   // {
   //    if (n % i == 0)
   //       cout << i << " ";
   // }


   // O(sqrt(n))
   int n;
   cin >> n;
   for (int i = 1; i*i <= (n); i++)
   {
      if (n % i == 0)
      {
         cout << i << " ";
         if ((n / i) != i)
            cout << (n / i) << " ";
      }
   }

   // cout<<sqrt(1e8);
   return 0;
}