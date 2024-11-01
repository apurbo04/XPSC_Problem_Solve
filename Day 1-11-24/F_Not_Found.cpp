#include <bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     string s;
     cin >> s;

     set<char> st(s.begin(), s.end());

     char c = 'a';
     while (c <= 'z')
     {
          if (st.find(c) == st.end())
          {
               cout << c;
               return 0;
          }
          c++;
     }
     cout << "None";
     return 0;
}