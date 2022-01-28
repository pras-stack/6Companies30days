Question : https://leetcode.com/problems/stone-game/
Solution : 
class Solution {
public:
    int dp[501][501];
    int help(int i, int j, vector<int>&p)
    {
        if(i>j)                 // no stones remaining
            return 0; 
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        return dp[i][j]= max(p[i]-help(i+1,j,p), p[j] - help(i,j-1,p));
    }
    bool stoneGame(vector<int>& p)
    {
        int n =p.size();
        memset(dp,-1,sizeof dp);
        return help(0,n-1,p)>0;
    }
};
