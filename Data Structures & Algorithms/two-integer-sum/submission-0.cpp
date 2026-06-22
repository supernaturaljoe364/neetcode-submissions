class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashMap;

        for(int i = 0; i < nums.size(); ++i){
            int temp = target - nums[i];
            auto it = hashMap.find(temp);
            if(it == hashMap.end()){
                hashMap[nums[i]] = i;
            }
            else
                return {hashMap[temp], i};
        }
    }
};
