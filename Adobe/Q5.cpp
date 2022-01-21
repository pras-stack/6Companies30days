Question : https://practice.geeksforgeeks.org/problems/express-as-sum-of-power-of-natural-numbers5647/1
Solution : 
class Solution{
    public:
    int res = 0;
    int checkRecursive(int num, int x, int k, int n)
    {
        if (x == 0) 
            res++;
        
        int r = (int)floor(pow(num, 1.0 / n));
    
        for (int i = k + 1; i <= r; i++) 
        {
            int a = x - (int)pow(i, n);
            if (a >= 0)
                checkRecursive(num, x - 
                              (int)pow(i, n), i, n);
        }
        return res;
    }
    
    
    int numOfWays(int x, int n)
    {
        return checkRecursive(x, x, 0, n);
    }
};
