class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //frequency list (value, frequency_count)
        std::unordered_map<int, int> hashMap;
        
        for(const auto& num : nums){
            hashMap[num]++;
        }

        //create a vector of frequencies
        vector<vector<int>> listOfFreq(nums.size() + 1);
        for(auto& pair : hashMap){
            listOfFreq[pair.second].push_back(pair.first);
        }

        std::vector<int> resultVec;
        size_t idx = 0;
        size_t n = listOfFreq.size();
        for(size_t i = n-1; i >= 0 && idx < k; --i){
            if(!listOfFreq[i].empty()){
                for(auto& values : listOfFreq[i]){
                    resultVec.push_back(values);
                    idx++;
                    if(idx == k) return resultVec;
                }
            }
        }

        return resultVec;
    }
};
