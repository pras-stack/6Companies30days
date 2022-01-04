Question : https://practice.geeksforgeeks.org/problems/decode-the-string2444/1

Solution: 

class Solution {
public:
    string decode(string &s , int &i)
    {
        string result="";
        while(i<s.size() && s[i]!=']' )
        {
            if(isdigit(s[i])){
                int k=0;
                while(i<s.size() && isdigit(s[i]))
                {
                    k=k*10 + s[i++] -'0';
                }
                i++; // for [ this opening bracket
                string r=decode(s,i);            // recursion step
               
                while(k--)
                {
                    result+=r;
                }
                i++; //for closing bracket ] 
            }
            else
            {
                result+=s[i++];
            }
        }
        return result;
    }
    string decodedString(string s)
    {
        int i=0;
        return decode(s,i);
    }
};
