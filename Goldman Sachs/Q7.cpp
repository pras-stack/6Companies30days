Question : https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1
  
  Solution:
  class Solution {
  public:
    int findPosition(int N , int M , int K) 
    {
        if (M <= N - K + 1) return M + K - 1;
        
        M -= N - K + 1;
        if (M % N)  return M % N;
        return N;
    }
};
