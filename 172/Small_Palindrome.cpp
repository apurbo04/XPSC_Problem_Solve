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
string constructPalindrome(int X, int Y)
{
   string half;
   for (int i = 0; i < X / 2; ++i)
   {
      half += '1';
   }
   for (int i = 0; i < Y / 2; ++i)
   {
      half += '2';
   }

   string palindrome = half;
   reverse(half.begin(), half.end());
   palindrome += half;

   return palindrome;
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   in t;
   while (t--)
   {
      int x, y;
      in x >> y;

      string result = constructPalindrome(X, Y);
      ot result nd;
   }
   return 0;
}

// Apurbo04