class Solution{
public:
    vector<int> minPartition(int N)
    {
        // code here
        
        vector<int>ans;

        stack<int>coin;

        coin.push(1);

        coin.push(2);

        coin.push(5);

        coin.push(10);

        coin.push(20);

        coin.push(50);

        coin.push(100);

        coin.push(200);

        coin.push(500);

        coin.push(2000);

        

        while(N > 0)

        {

            if(N < coin.top())

            {

                coin.pop();

 

            }

            else{

                ans.push_back(coin.top());

                N = N - coin.top();

            }

        

        }

        return ans;
    }
};

