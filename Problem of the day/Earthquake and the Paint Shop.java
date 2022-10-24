class alphanumeric {
    public String name;
    public int count;
    alphanumeric(String name, int count) {
        this.name = name;
        this.count = count;
    }
};
class Solution {
    alphanumeric[] sortedStrings(int N, String A[]) {
        Map<String, Integer> hm = new TreeMap<>();
        
        for(String s : A)
            hm.put(s, hm.getOrDefault(s, 0)+1);
            
        alphanumeric[] a = new alphanumeric[hm.size()];
        
        int i=0;
        for(String s : hm.keySet()){
            a[i] = new alphanumeric(s, hm.get(s));
            i++;
        }
        
        return a;
    }
};
