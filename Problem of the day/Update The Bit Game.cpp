class Solution{   
public:
    int swapBitGame(long long N){
        // code here 
        int ans = 0;
        for(long long int i = 40 ; i >=0 ; i--)
        {
            if((1LL<<i) & N)
            {
                ans++;
            }
        }
        if(ans%2)
        {
            return 1;
        }
        else return 2;
    }
};