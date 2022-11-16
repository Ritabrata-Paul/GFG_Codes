class Solution {
  public:
    int beautySum(string s) {
        // Your code goes here
        
        int i,j,l,k;

        int sum=0;

        l=s.length();

        for (i=0;i<l;i++) { 

            int most=0,least,n;

            char arr[128]={0};

            for (j=i;j<l;j++) { 

                arr[s[j]]++;

                n=arr[s[j]];

                if (n>most) { 

                    most=n;

                }

                least=10000;

                for (k=97;k<=122;k++) { 

                    if (arr[k]>0 && arr[k]<least) { 

                        least=arr[k];

                    }

                }

                sum+=most-least;

            }

        }

        return sum;
    }
};