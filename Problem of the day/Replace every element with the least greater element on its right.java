class Solution {
    public static ArrayList<Integer> findLeastGreater(int n, int[] arr) {
        // code here
        int[] visited = new int[100001];
        int[] sortedarr = Arrays.copyOf(arr , n);
        for(int i = 0 ; i < n ; i++){
            visited[arr[i]]++;
        }
        ArrayList<Integer> arrlist = new ArrayList<>();
        Arrays.sort(sortedarr);
        l:
        for(int i = 0 ; i < n ;i ++){
            visited[arr[i]]--;
            int a = arr[i];
            int index = Arrays.binarySearch(sortedarr , a);
            while(index < n-1 && sortedarr[index] == sortedarr[index +1]){index++;}
            if(index == n-1){arrlist.add(-1);continue l;}
            index++;
            while(index < n){
                if(visited[sortedarr[index]] <= 0 ){index++;}

                else{
                    break;
                }
            }
            if(index == n ){arrlist.add(-1);}
            else {
                arrlist.add(sortedarr[index]);
            }
        }

        return arrlist;
    }
}