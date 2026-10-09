class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freqMap;

        for(const auto& num : nums){
            freqMap[num]++;
        }

        std::vector<std::vector<int>> freqVec(nums.size() + 1);
        //insert into vector based on frequency
        for(const auto& pair : freqMap){
            freqVec[pair.second].push_back(pair.first);
        }

        //now take k elemetns out from freqVec
        std::vector<int> resultVec;
        int idx = 0;
        for(int i = freqVec.size()-1; (i >= 0 && idx < k); i--){
            if(!freqVec[i].empty()){
                //take the most frequent elements
                for(const auto& val : freqVec[i]){
                    //take the first k elements
                    resultVec.push_back(val);
                    idx++;
                    if(idx == k) return resultVec;
                }
            }
        }

        return resultVec;
    }
};
