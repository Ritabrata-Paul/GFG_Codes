class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here     
        int total = R*C;
        int lo = 1, hi = 2000;
        while(lo <= hi){
            int mid = (lo + hi)/2;
            int count = 0;
            for(int i=0;i<R;i++){
                count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }   
            
            if(count <= total/2) lo = mid + 1;
            else hi = mid - 1;
        }
        
        return lo;
    }
};