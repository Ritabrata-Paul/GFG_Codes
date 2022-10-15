class Tuple {
    int x, y, dist;
    
    public Tuple(int x, int y, int dist) {
        this.x = x;
        this.y = y;
        this.dist = dist;
    }
}

class Solution {

    private static final int[][] dirs = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    
    public boolean isValid(int[][] grid, int x, int y, int m, int n) {
        return x >= 0 && x < m && y >= 0 && y < n;
    }

    int shortestPath(int[][] grid, int[] source, int[] destination) {
        int m = grid.length;
        int n = grid[0].length;
        
        Queue<Tuple> queue = new LinkedList<>();
        queue.offer(new Tuple(source[0], source[1], 0));
        boolean[][] visited = new boolean[m][n];
        visited[source[0]][source[1]] = true;
        
        while (!queue.isEmpty()) {
            int size = queue.size();
            
            for (int i=0; i < size; i++) {
                Tuple curr = queue.poll();
                
                if (curr.x == destination[0] && curr.y == destination[1]) {
                    return curr.dist;
                }
                
                for (int[] dir : dirs) {
                    int newX = dir[0] + curr.x;
                    int newY = dir[1] + curr.y;
                    
                    if (isValid(grid, newX, newY, m, n) && grid[newX][newY] != 0 && !visited[newX][newY]) {
                        queue.offer(new Tuple(newX, newY, curr.dist + 1));
                        visited[newX][newY] = true;
                    }
                }
            }
            
        }
        
        return -1;
    }
}