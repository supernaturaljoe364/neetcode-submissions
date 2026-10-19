class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hashMap;

        for(auto num : nums){
            hashMap[num]++;
        }

        for(auto pair : hashMap){
            if(pair.second > 1){
                return true;
            }
        }

        return false;
    }
};