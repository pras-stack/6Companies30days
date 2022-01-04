Question Link- https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/

Solution - 

  class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
         vector<vector<string>> ans;
        unordered_map<string, vector<string>>umap;
        
        for(auto x: strs){
            string temp = x;
            sort(x.begin(), x.end());
            umap[x].push_back(temp);
        }
      
        for(auto x : umap){
            ans.push_back(x.second);
        }
        return ans;
    }
};


Approach : 
