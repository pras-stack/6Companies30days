Question : https://practice.geeksforgeeks.org/problems/longest-arithmetic-progression1019/1/#

Solution : class Solution{   
public:
    int lengthOfLongestAP(int arr[], int n) {
        // code here
        if(n==1) return 1;
        if(n==2) return 2;
        
        vector<unordered_map<int,int>> dp(n);
        
        int ans=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                int diff = arr[i]-arr[j];
                
                if(dp[j].find(diff)==dp[j].end()){
                    dp[i][diff]=2;
                }
                else
                {
                    dp[i][diff]=dp[j][diff]+1;
                }
                ans = max(ans,dp[i][diff]);
            }
        }
        return ans;
    }
};
