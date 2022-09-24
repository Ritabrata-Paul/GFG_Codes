class Solution {
    public int[][] solveQueries(int n, int[][] Queries) {
        // Code here
        int q = Queries.length;
        
        int[][] mat = new int[n][n];
        
        for(int i=0;i<q;++i){
            int a = Queries[i][0];
            int b = Queries[i][1];
            int c = Queries[i][2];
            int d = Queries[i][3];
            
            for(int j=a;j<=c;++j){
                for(int k=b;k<=d;++k){
                    ++mat[j][k];
                }
            }
        }
        
        return mat;
    }
}