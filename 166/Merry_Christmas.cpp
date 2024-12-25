#include<bits/stdc++.h>
using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;cin>>n;
   int ans =0;
   if(n>=1) ans+=1;
   if(n>=3) ans+=1;
   if(n>=7) ans+=1;
   cout<<ans;

   return 0;
}