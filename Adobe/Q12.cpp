Question : https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/
Solution :
class Solution{
    public:
    vector<int> leaders(int a[], int n)
    {
       vector<int> v;
        int x =a[n-1];
        v.push_back(x);
        for(int i=n-2;i>=0;i--){
            if(a[i]>=x)
            {
                x=a[i];
                v.push_back(x);
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};
