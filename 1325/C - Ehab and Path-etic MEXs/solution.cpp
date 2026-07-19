#pragma once
#pragma GCC optimize("O3") // Optimize with level 3
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n; 
    vector <vector <int>> adj(n+1);
    for (int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(i);
        adj[v].push_back(i);
    }   
    vector <int> ans(n-1,-1);
    int st_node=-1;
    for(int i=1;i<=n;i++)
        if(adj[i].size()>2)
        {
            st_node=i;
            break;
        }
        int count_label=0;
        if(st_node!=-1)
         {
           for(int v:adj[st_node])
           {
            if(count_label<3){
            ans[v]=count_label;
            count_label++;
        }
           }
        }
        for(int i=0;i<n-1;i++)
        {
            if(ans[i]==-1)
            {
                ans[i]=count_label++;
            }
        }
        for(auto i:ans)
            cout<<i<<" ";
        cout<<"
";
      
    return 0;
}