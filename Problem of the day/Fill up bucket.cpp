class Solution{
public:
    int totalWays(int n, vector<int>capacity) {
        // code here
        sort( capacity.begin() , capacity.end()) ;

        

        long long int ans = 1 ;

        

        int mod = pow( 10 , 9 ) + 7 ;

        

        for( int i = 0 ; i < n ; i++ )

        {

            ans = (ans*(capacity[i]-i))%mod ;

            

            if( ans < 0 )

            {

                ans += mod ;

            }

        }

        

        return ans ;
        
    }
};