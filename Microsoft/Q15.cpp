Question : https://practice.geeksforgeeks.org/problems/alien-dictionary/1/
Solution : class Solution{
    public:
    string findOrder(string dict[], int N, int K) 
    {
         vector<int> g[K];
       
       for(int i = 0; i<N-1; i++){
           int minlen = min(dict[i].size(),dict[i+1].size());
           for(int j = 0; j<minlen; j++){
               if(dict[i][j] != dict[i+1][j]){
                   g[dict[i][j]-'a'].push_back(dict[i+1][j]-'a');
                   break;
               }
           }
       }
       
       vector<int> indegree(K,0);
       for(int i = 0; i<K; i++){
           for(auto x : g[i]) indegree[x]++;
       }
       
       queue<int> q;
       
       for(int i = 0; i<K; i++){
           if(indegree[i] == 0) q.push(i);
       }
       
       string ans = "";
       while(!q.empty()){
         int node = q.front();
         q.pop();
         ans += (node+'a');
         for(auto x : g[node]){
             indegree[x]--;
             if(indegree[x] == 0) q.push(x);
         }
       }
       
       // cout<<ans;
       
       if(ans.size() == K) return ans;
       
       return "";
    }
};
