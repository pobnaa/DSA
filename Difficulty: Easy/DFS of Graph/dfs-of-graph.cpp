//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:

   void helper(int start,vector<int>adj[],vector<int>&vis,vector<int>&ls){
       vis[start]=1;
       ls.push_back(start);
       for(auto it : adj[start]){
           if(!vis[it]){
               vis[it]=1;
               helper(it,adj,vis,ls);
           }
       }
   }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector <int> vis(V,0);
         vis[0]=1;
        vector<int>ls;
        int start =0;
        helper(0,adj,vis,ls);
        return ls ;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends