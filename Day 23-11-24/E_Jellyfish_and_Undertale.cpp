#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n";
#define yes cout << "YES\n";
using namespace std;
void solve()
{
     int a,b,n;
     in a>>b>>n;
     vector<int> v(n);
     ll cnt = 0;
     for (int i = 0; i < n; i++)
     {
          in v[i];
          cnt+= min(a-1,v[i]);
     }
     ot cnt+b<<endl;
}
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t;
     in t;
     while(t--)
     {
          solve();
     }
     return 0;
}

//Apurbo04