class Solution
{
    public:
    bool check(int N,int M,vector<vector<int>> Edges)
    {
        // code here
        vector<int> visited(N);

        vector<vector<int>> graph(N);

        

        for(vector<int>& edge : Edges){

                graph[edge[0]-1].push_back(edge[1]-1);

                graph[edge[1]-1].push_back(edge[0]-1);

        }

        

        for(int i = 0; i < N; i++){

            if(dfs(graph,visited,i,1)){

                return true;

            }

        }

        

        return false;

    }

    

    bool dfs(vector<vector<int>>& graph,vector<int>& visited,int node,int cnt){

       if(cnt == graph.size()) return true;

       

       visited[node] = 1;

       

       for(int i : graph[node]){

           if(!visited[i] && dfs(graph,visited,i,cnt+1)) return true;

       }

       

       

        return visited[node] = 0;
    }
};