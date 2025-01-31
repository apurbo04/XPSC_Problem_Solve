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

bool canFormPalindrome(string s, int k)
{
   unordered_map<char, int> freq;

   for (char c : s)
   {
      freq[c]++;
   }

   int odd_count = 0;
   for (auto it : freq)
   {
      if (it.second % 2 != 0)
      {
         odd_count++;
      }
   }
   return odd_count - k <= 1;
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, k;
   string s;

   in n >> k;
   in s;

   if (canFormPalindrome(s, k))
      yes;
   else
      no;

   return 0;
}

// Apurbo04