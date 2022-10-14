class Complete{
    
   
    // Function for finding maximum and value pair
    public static int maximizeSum (int arr[], int n) {
        //Complete the function
        int max = -1;
        for(int i = 0; i < n; i++) {
            max = Math.max(max, arr[i]);
        }
          
        int []freq = new int[max + 1];
          
        for(int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
          
        int ans = 0, i=max;
         
        while(i>0) {
            if (freq[i] > 0){
                ans += i;
                freq[i-1]--;
                freq[i]--;
            } else{               
                i--;
            }           
        }
         
        return ans;
    }
    
    
}