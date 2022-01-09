QUESTION : https://practice.geeksforgeeks.org/problems/count-ways-to-nth-stairorder-does-not-matter1322/1/#

Solution : 
int t[46]={0};
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
         long ways =0;
        for(int i=0;i<=m;i++){
            ways++;
            m--;
        }
        return ways;
        
        // alternative
        long long dp[m+1];
        dp[0]=1,dp[1]=1;
        for(int i=2;i<=m;i++){
            dp[i]=1+dp[i-2];
        }
        return dp[m];
        
        // another alternative
        return m/2+1;
    }
};
