Question :https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/#
Solution :
class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
     void getCombination(int arr[], int idx, int &N, string &curr, vector<string> &res, string map[]) {
        if(idx == N)
        {
            res.push_back(curr);
            return;
        }
        
        for(char ch : map[arr[idx]]) 
        {
            curr.push_back(ch);
            getCombination(arr, idx+1, N, curr, res, map);
            curr.pop_back();
        }
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        string curr = "";
        vector<string> res;
        string map[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        getCombination(a, 0, N, curr, res, map);
        return res;
    }
};
