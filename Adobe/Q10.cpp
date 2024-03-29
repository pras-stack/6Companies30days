Question : https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1/
Solution :
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
         map<string, int> omap;
        vector<string> vect;
        string str = "";
        int max = 0;
        
        for(int i = 0; i < n; i++) omap[arr[i]]++;
        
        for(auto i : omap){
            
            if(i.second > max){
                str = i.first;
                max = i.second;
            }
        }
        vect.push_back(str);
        vect.push_back(to_string(max));
        return vect;
    }
};
