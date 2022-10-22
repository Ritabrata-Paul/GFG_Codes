class Solution {
    static int fillingBucket(int N) {
        // code here
        int a=1;

        int b=2;

        if(N==1) return a;

        if(N==2) return b;

        

        while(N-2>0){

            int c=(a+b)%(1_000_000_00);

            a=b;

            b=c;

            N--;

        }

        return b%(1_000_000_00);
    }
};