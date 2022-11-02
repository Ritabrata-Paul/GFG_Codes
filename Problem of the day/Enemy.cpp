class Solution
{
    public:
        int largestArea(int n,int m,int k,vector<vector<int>> &enemy)
        {
            //  code here
            if(k==0) // if nothing is blocked return max possible area
            return n*m;
            vector<int> rb; // store the blocked rows and 
            vector<int> cb; // blocked columns
            for(auto x:enemy)
            {
                rb.push_back(x[0]);
                cb.push_back(x[1]);
            }
            sort(rb.begin(),rb.end()); // sort them
            sort(cb.begin(),cb.end());
            // the main intuition here is to get the maximum unblocked continous row and maximum
            // unblocked continous column
            // as we have sorted the blocked rows and columns this can be achieved very easily
            int row = rb[0]-1,col = cb[0]-1;
            
            for(int i=1;i<k;i++)
            {
                row = max((rb[i]-rb[i-1]-1),row);
                col = max((cb[i]-cb[i-1]-1),col);
            }
            row = max((n-rb[k-1]),row);
            col = max((m-cb[k-1]),col);
            
            return row*col;// now simply return the area
        }
};