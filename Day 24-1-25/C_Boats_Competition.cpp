#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define vt int n;cin>>n;vector<int> v(n)
#define nd << '\n'

using namespace std;
void solve()
{
   int n;
   in n;
   map<int,int> mp;
   for (int i = 0; i < n; i++)
   {
      int x;
      in x;
      mp[x]++;
   }
   int ans = 0;
   for (int i = 2; i <= (2*n); i++)
   {
      int total = 0;
      for(auto j : mp)
      {
         int other=i-j.first;
         if(other>=1&&mp.count(other))
         total+= min(j.second,mp[other]);
      }
      total/=2;
      ans = max(ans,total);
   }
   ot ans nd;

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