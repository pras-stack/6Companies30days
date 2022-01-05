Question : https://leetcode.com/problems/minimum-size-subarray-sum/

Solution: class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int sum =0;
        int count =0;
        int minLength = INT_MAX;
        
        for(int i=0; i<nums.size(); i++)
        {
            int j=i;
        while(sum <target && j<nums.size())
        {
            sum += nums[j++];
            count++;
            
            if(sum>= target)
            {
                minLength = min(minLength, count);
                count =0;
            }
        }
            sum=0;
        }
        if(minLength == INT_MAX)
        {
            return 0;
        }
        else
        {
            return minLength;
        }
    }
};
