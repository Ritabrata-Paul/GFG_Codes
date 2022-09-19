class Solution{
    static List<Integer> leftSmaller(int n, int a[])
    {
        //code here
        Stack <Integer> st = new Stack <>();
        ArrayList <Integer> li = new ArrayList <>();
        
        
        for (int i = 0; i< n; i++){
            while (!st.isEmpty() && st.peek() >= a[i]){
                st.pop();
            }
            if(st.isEmpty()){
                li.add(-1);
            }
            else{
                li.add(st.peek());
                
            }
            st.push(a[i]);
        }
        return li;
    }
}