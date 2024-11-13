#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int t;
     cin >> t;
     while (t--)
     {
          int A, B;
          cin >> A >> B;
          int s1 = A * 10;
          int s2 = A * 11;
          int s3 = A * 12;
          if (B >= s1 && B <= s3)
          {
               cout << "YES" << endl;
          }
          else
          {
               cout << "NO" << endl;
          }
     }

     return 0;
}