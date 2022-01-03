Question Link - https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/


Solution - Using Sliding Window

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        int n = nums.size();
        if(n==0)
            return 0;
        long long p = 1;
        int end =0;
        int start =0;
        int count =0;
        
        while(end<n)
        {
            p= p * nums[end];
            while(start<=end && p>=k)
            {
                p/=nums[start];
                start ++;
            }
            
            if(p<k)
            {
                count += (end-start+1);
            }
            end++;
        }
        return count;
    }
};
