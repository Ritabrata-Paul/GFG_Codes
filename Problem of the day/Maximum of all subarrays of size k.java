class Solution
{
    //Function to find maximum of each subarray of size k.
    static ArrayList <Integer> max_of_subarrays(int arr[], int n, int k)
    {
        // Your code here
        ArrayList<Integer> a=new ArrayList<>();

        ArrayList<Integer> al=new ArrayList<>();

        for(int i=0;i<k;i++)

        a.add(arr[i]);

        al.add(Collections.max(a));

        for(int i=k;i<n;i++)

        {

            a.remove(0);

            a.add(arr[i]);

            al.add(Collections.max(a));

        }

        return al;
    }
}