#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
          priority_queue<int> pq;
          vector<int> v(n);
          for (int i = 0; i < n; i++)
          {
               cin>>v[i];
          }
          long long ans = 0;
          for(int i=0;i<n;i++)
          {
               if(v[i]==0)
               {
                    if(pq.size()>0)
                    {
                         ans+=pq.top();
                         pq.pop();
                    }
               }
               else 
               {
                    pq.push(v[i]);
               }
          }
          cout<<ans<<endl;
     }
     return 0;
}