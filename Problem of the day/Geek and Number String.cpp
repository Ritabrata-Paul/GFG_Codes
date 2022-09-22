class Solution{
public:
    int minLength(string s, int n) {
        // code here
        stack<int>st;
        for(auto i:s){
            if(i=='0' && !st.empty() && st.top()=='9') st.pop();
            else if(i == '1' && !st.empty() && st.top()=='2') st.pop();
            else if(i == '2' && !st.empty() && st.top()=='1') st.pop();
            else if(i == '3' && !st.empty() && st.top()=='4') st.pop();
            else if(i == '4' && !st.empty() && st.top()=='3') st.pop();
            else if(i == '5' && !st.empty() && st.top()=='6') st.pop();
            else if(i == '6' && !st.empty() && st.top()=='5') st.pop();
            else if(i == '7' && !st.empty() && st.top()=='8') st.pop();
            else if(i == '8' && !st.empty() && st.top()=='7') st.pop();
            else if(i == '9' && !st.empty() && st.top()=='0') st.pop();
            else st.push(i);
        }
        return st.size();
    } 
};