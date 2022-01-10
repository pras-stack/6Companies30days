Question : https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1/#
Solution :
class Solution{
    public:
    string colName (long long int n)
    {
       string ans ="";
        while(n!=0)
        {
            n--;
            int r=n%26;
            ans = string(1,r+'A') +ans ;
            n =n/26;
            
        }
        return ans;
    }
};
