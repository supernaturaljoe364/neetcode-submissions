class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hashMap;

        for(auto num: nums){
            auto it = hashMap.find(num);
            if(it != hashMap.end()){
                return true;
            }
            else{
                hashMap[num] = 1;
            }
        }

        return false;
    }
};