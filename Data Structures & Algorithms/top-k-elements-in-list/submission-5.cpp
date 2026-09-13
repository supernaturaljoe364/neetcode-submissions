class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        std::unordered_map<int, int> freqMap;

        for(const auto& num : nums){
            freqMap[num]++;
        }

        std::vector<std::vector<int>> listOfFreq(nums.size() + 1);

        for(const auto& entry : freqMap){
            listOfFreq[entry.second].push_back(entry.first);
        }

        std::vector<int> resultvector;
        size_t idx = 0;
        size_t n = listOfFreq.size();

        for(size_t i = n-1; i >= 0 && idx < k; i--){
            if(!listOfFreq[i].empty()){
                for(const auto& values: listOfFreq[i]){
                    resultvector.push_back(values);
                    idx++;
                    if(idx == k) return resultvector;
                }
            }
        }

        return resultvector;
    }
};
