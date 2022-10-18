class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<vector<int>> vis(N,vector<int>(N));
	    queue<pair<int,int>> q;
	    q.push({0,0});
	    vector<int> res;
	    while(q.size())
	    {
	        pair<int,int> frnt = q.front();q.pop();
	        if(vis[frnt.first][frnt.second] == 0)
	        {
	            res.push_back(A[frnt.first][frnt.second]);
	            vis[frnt.first][frnt.second] = 1;
	            if(frnt.second+1 < N)q.push({frnt.first,frnt.second+1});
	            if(frnt.first+1 < N)q.push({frnt.first+1,frnt.second});
	        }
	    }
	    return res;
	}

};