class Solution{
    static String maxSum(String w,char x[],int b[], int n){
        //code here
        HashMap<Character, Integer> map = new HashMap<>();
        for(int i = 0; i < x.length; i++){
            map.put(x[i], b[i]);
        }
        int ans = Integer.MIN_VALUE;
        String fans = "";
        int start = 0;
        int curr = 0;
        for(int i = 0; i < w.length(); i++){
            char ch = w.charAt(i);
            int val = (ch);
            if(map.containsKey(ch))
                val = map.get(ch);
            if(curr >= 0){
                curr += val;
            }else{
                curr = val;
                start = i;
            }
            if(ans < curr){
                ans = curr;
                fans = w.substring(start, i + 1);
            }
        }
        return fans;
    }
}