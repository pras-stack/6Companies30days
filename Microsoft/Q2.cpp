Question : https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1/#
Solution :
class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) 
	{
	    vector<int> val[N];
	    for(auto &it : prerequisites)
	    {
	        val[it.first].emplace_back(it.second);
	    }
	    int cnt=0, i=0;
	    vector<int> val1(N,0);
	    for(;i<N;i++)
	    {
	        for(auto &it : val[i])
	            val1[it]++;
	    }
	     queue<int> q;
	    for(int i=0; i<N; i++) {
	        if(val1[i]==0) q.push(i);
	    }
	    while(!q.empty()) {
	        int node = q.front();
	        q.pop();
	        cnt++;
	        for(auto& it: val[node]) {
	            val1[it]--;
	            if(val1[it]==0) q.push(it);
	        }
	    }
	    return (cnt==N);
	}
};
