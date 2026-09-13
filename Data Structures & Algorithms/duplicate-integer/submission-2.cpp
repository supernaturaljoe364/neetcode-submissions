class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hashMap;

        for(int i = 0; i < nums.size(); i++){
            hashMap[nums[i]]++;
        }

        for(int i = 0; i < nums.size(); i++){
            if(hashMap[nums[i]] >= 2){
                return true;
            }
        }
        return false;
    }
};