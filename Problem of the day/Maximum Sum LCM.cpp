class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        // code here
          if(n == 1) return 1;

        long long int ans = 0;

        for(int i = 1; i*i <= n; i++) {

            if(n%i == 0) {

                if(n/i == i) {

                    ans += i;

                } else {

                    ans += i;

                    ans += n/i;

                }

            }

        }

        return ans;
    }
};