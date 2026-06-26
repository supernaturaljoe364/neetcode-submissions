class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //frequency list (value, frequency_count)
        std::unordered_map<int, int> freqMap;
        //step 1: count frequency
        for(auto num : nums)
            freqMap[num]++;

        //step 2: create a list of frequencies
        vector<vector<int>> listOfFreq(nums.size() + 1);

        //step 3: insert into the listOfFreq 
        for(auto pair : freqMap)
            listOfFreq[pair.second].emplace_back(pair.first);

        //step 4: display the top k elements
        int n = listOfFreq.size();
        vector<int> returnVec;
        int idx = 0;
        for(int i = n-1; i >= 0 && idx< k; --i){
            if(!listOfFreq[i].empty()){
                for(auto num : listOfFreq[i]){
                    returnVec.push_back(num);
                    idx++;
                    if(idx == k) return returnVec;
                }
                
            }
        }

        return returnVec;
    }
};
