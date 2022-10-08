class Solution {

  public:

    int countOfSubstrings(string s, int k) {

        unordered_map<char,int>m;

        if(s.size()<k)return 0;

        for(int i=0;i<k;i++){

            m[s[i]]++;

        }

        int n=s.size();

        int ans=0;

        if(m.size()==k-1)ans++;

        for(int i=k;i<n;i++){

            m[s[i-k]]--;

            if(m[s[i-k]]==0){

                m.erase(s[i-k]);

                

            }

            m[s[i]]++;

            if(m.size()==k-1)ans++;

            

        }

        return ans;

    }

};