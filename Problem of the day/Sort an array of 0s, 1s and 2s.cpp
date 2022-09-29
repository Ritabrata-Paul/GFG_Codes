class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int count0 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i<n; i++){
            if(a[i] == 0){
                count0++;
            }
            else if(a[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        
        for(int i  = 0; i<n; i++){
            if(count0>0){
                a[i]=0;
                count0--;
            }
            else if(count1>0){
                a[i]=1;
                count1--;
            }
            else{
                a[i]=2;
                count2--;
            }
        }
    }
    
};