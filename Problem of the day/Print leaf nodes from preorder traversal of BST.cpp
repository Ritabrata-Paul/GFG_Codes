class Solution {
  public:
    vector<int> leafNodes(int arr[],int N) {
        // code here
        vector<int> ans;
       stack<int> st;
       for (int i = 0 ; i < N ; i++){
           int cnt = 0 , last = -1;
           while (!st.empty() and st.top() < arr[i]){
               if (last == -1) last = st.top();
               st.pop();
               cnt++;
           }
           if (cnt >= 2) ans.push_back(last);
          st.push(arr[i]);
       }
       ans.push_back(st.top());
       return ans;
    }
};