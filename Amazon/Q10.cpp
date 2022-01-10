Question : https://practice.geeksforgeeks.org/problems/nuts-and-bolts-problem0431/1
Solution :
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) 
	{
	    string str = "! # $ % & * @ ^ ~." ;
	    int p=0;
	    for(int i=0; i<10; i++)
	    {
	        for(int j=0; j<n; j++)
	        {
	            if(nuts[j]==str[i])
	            {
	                swap(nuts[j],nuts[p]);
	                bolts[p]=nuts[p];
	                p++;
	                if(p>n-1)
	                {
	                    break;
	                }
	            }
	        }
	    }
	}

};


