class Solution:
    def minChar(self,str):
        #Write your code here
        n = len(str)

        i,j=0,n-1

        ans=n-1

        while (i<j):

            if str[i]==str[j]:

                i+=1

                j-=1

            else:

                i=0

                ans-=1

                j=ans

        return n-ans-1