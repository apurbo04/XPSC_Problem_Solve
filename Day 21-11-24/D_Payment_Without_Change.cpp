#include <bits/stdc++.h>
#define ll long long
#define in cin >>
#define ot cout <<
#define no cout << "NO\n";
#define yes cout << "YES\n";
using namespace std;

void solve()
{
     ll a, b, n, s;
     in a >> b >> n >> s;

     ll max_n_coins = min(s / n, a);

     if (s - max_n_coins * n <= b)
          yes
     else
          no
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

//Apurbo04