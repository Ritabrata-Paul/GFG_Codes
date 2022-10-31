class Solution {
  public:
    vector<int> satisfyEqn(int arr[], int n) {
        // code here
        vector<int> res(4, -1);
        map<pair<int,int>,int> pairSums;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                pairSums.insert({ {i,j}, arr[i] + arr[j] });
            }
        }
        
        for(auto pairSum1: pairSums){
            if(res[0] != -1) break;
            for(auto pairSum2: pairSums){
                auto pair1 = pairSum1.first;
                auto pair2 = pairSum2.first;
                if(pair1.first == pair2.first || pair2.second == pair1.second)
                    continue;
                if(pair1.first == pair2.second || pair2.first == pair1.second)
                    continue;
                
                
                if(pairSum1.second == pairSum2.second){
                    res[0] = pair1.first;
                    res[1] = pair1.second;
                    res[2] = pair2.first;
                    res[3] = pair2.second;
                    break;
                }
            }
        }
        
        return res;
    