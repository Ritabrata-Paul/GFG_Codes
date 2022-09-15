class Solution { 
    int minSubset(int[] arr,int n) { 
        long sum = 0, sum2 = 0;
        int count = 0;
        
        for(int i = 0; i< n; i++){
            sum += arr[i]; 
        }
        
        Arrays.sort(arr);
        
        for(int i=n-1; i>=0; i--){
            sum2 += arr[i];
            sum -= arr[i];
            count++;
            
            if(sum2>sum){
                return count;
            }
        }
        
        return count;
    }
}