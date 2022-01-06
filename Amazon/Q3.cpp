Question : https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/

Solution : 
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) 
    {
        vector<int> v;
        deque<int> dq;
        
        for(int i=0;i<n;i++)
        {
            while(!dq.empty() && dq.front()<=i-k)
                  dq.pop_front();
                  
                  while(!dq.empty() && arr[dq.back()]<=arr[i] )
                     dq.pop_back();
                     
                     dq.push_back(i);
            
            
            if(i>=k-1)
            v.push_back(arr[dq.front()]);
            
        }
        
        
        return v;
    }
};
