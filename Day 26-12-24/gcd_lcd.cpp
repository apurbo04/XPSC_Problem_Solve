#include <bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   cout << __gcd(n, m) << endl; // O(log(min(a,b)))
   // cout << (n * m) / (__gcd(n, m)) << endl; // O(log(min(a,b)))
   cout << (n / __gcd(n, m)) * m << endl; // O(log(min(a,b)))
   return 0;
}