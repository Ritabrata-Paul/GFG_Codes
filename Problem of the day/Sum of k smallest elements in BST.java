class Tree {
    int sum;
    int count;
    int sum(Node root, int k) { 
        sum = 0;
        count = 0;
        dfs(root, k);
        return sum;
        // Code here
    } 
    void dfs(Node root, int k){
        if(root == null)return;
        dfs(root.left, k);
        if(count<k){
            sum+=root.data;
            count++;
            
        }
        if(count<k){
            dfs(root.right,k);
        }
    }
}