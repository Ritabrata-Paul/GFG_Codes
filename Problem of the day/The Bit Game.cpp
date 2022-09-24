class Solution{   
public:
    int swapBitGame(long long N){
        // code here 
        long long int c = 0, d = 0;
        while(N){
            if(N%2 && d>0)
                c^=d;
            if(N%2==0)
                d++;
            N/=2;
        }
        if(c)
            return 1;
        else
            return 2;
    }
};



// Update Code Here


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