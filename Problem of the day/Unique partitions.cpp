class Solution{
	public:
    vector<vector<int>> UniquePartitions(int n) {
        // Code here
        vector<vector<int>> ans;

        vector<int> b;

        dfs(n,ans,b);

        return ans;
        
    }
    void dfs(int n,vector<vector<int>> &ans,vector<int> &b){

        if(n == 0){

            ans.push_back(b);;

            return;

        }

        for(int i = 0; i<n; i++){

            if(b.empty() || (n - i) <= b.back()){

                b.push_back(n - i);

                dfs(i,ans,b);

                b.pop_back();

            }

        }
    }
};