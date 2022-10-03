class Solution {
  public:
    int primefactor(int n)
    {   
        int x=0;
        if(n==1)
        {
            return n;
        }
        set<int>s;
        for(int i=2;i<=n;i++)
        {
            while(n%i==0)
            {
                s.insert(i);
                n=n/i;
            }
        }

        /*copying set values to vector to take the prime factor sum of a number */

        vector<int>v(s.begin(),s.end());
        for(int i=0;i<v.size();i++)
        {
            x+=v[i];
        }
        return x;
    }
    


    int sumOfAll(int l, int r)
    {
        int ans=0;
        for(int i=l;i<=r;i++)
        {
            ans+=primefactor(i);
        }
     return ans;
    }
};