class Solution
{
    public:
    long long int numberOfSquares(long long int base)
    {
        //code here
        base = base / 2 -1;
        
        return (base * (base + 1)) / 2;
    }
};