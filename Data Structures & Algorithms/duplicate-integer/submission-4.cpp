class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> hashMap;

        for(auto i : nums){
            auto it = hashMap.find(i);

            if(it != hashMap.end()){
                return true;
            }
            else{
                hashMap[i] = 1;
            }
        }

        return false;
    }
};