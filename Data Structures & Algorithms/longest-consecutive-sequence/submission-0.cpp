class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> store(nums.begin(), nums.end());

        int longest = 0;
        for(auto num : nums){
            int streak = 0;
            int curr = num;

            while(store.find(curr) != store.end()){
                streak++;
                curr++;
            }
            longest = max(longest, streak);

        }

        return longest;
    }
};
