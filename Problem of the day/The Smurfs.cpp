class Solution{
public:
    int findMin(int n, char a[]){
        // code here
        int r=0,g=0,b=0; // calculate freq

       for(int i=0;i<n;i++){

           if(a[i] == 'R')

           r++;

           else if(a[i]=='G')

           g++;

           else

           b++;

       }

       if(r==n || g==n || b==n) // all 1 colour

       return n;

       

       if(r%2==0 && g%2==0 && b%2==0) // all even

             return 2;

       else if(r%2!=0 && g%2!=0 && b%2!=0) // all odd

            return 2;

       else

             return 1;
    }
};
