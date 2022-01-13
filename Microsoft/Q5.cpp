Question : https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#

Solution : 
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        stack<int> st;
       vector<int> v;
       st.push(0);
       v.push_back(1);
       for(int i=1;i<n;i++){
           while(!st.empty()&&price[st.top()]<=price[i]){
               st.pop();
           }
           if(st.empty()){
                v.push_back(i+1);
           }
           else{
               v.push_back(i-st.top());
           }
           st.push(i);
       }
       return v;
    }
};
