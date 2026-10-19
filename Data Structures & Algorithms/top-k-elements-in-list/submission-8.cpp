class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freqMap;

        for(const auto& num : nums){
            freqMap[num]++;
        }

        std::vector<std::vector<int>> listOfFreq(nums.size() + 1);
        for(const auto& pair : freqMap){
            listOfFreq[pair.second].push_back(pair.first);
        }

        std::vector<int> resultVec;
        int n = listOfFreq.size();
        int idx = 0;

        for(int i = n-1; (i > 0 && idx < k); i--){
            if(!listOfFreq[i].empty()){
                for(const auto& val : listOfFreq[i]){
                    resultVec.push_back(val);
                    idx++;

                    if(idx == k) return resultVec;
                }
            }
        }

        return resultVec;
    }
};
