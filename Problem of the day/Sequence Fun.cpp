
class Solution {
	public:
		int NthTerm(int n){
		    // Code  here
		    int mod=1000000007;

             long long int temp=1;
        
             for(int i=1;i<=n;i++)
        
             {
        
                 temp=(temp*i+1)%mod;
        
                 
        
             }
        
             return temp;
		}

};
