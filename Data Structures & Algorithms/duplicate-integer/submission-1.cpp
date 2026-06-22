class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hashMap;

        for(int i = 0; i < nums.size(); i++){
            hashMap[nums[i]]++;
        }

        for(auto pair : hashMap){
            if(pair.second >= 2){
                return true;
            }
        }

        return false;
    }
};