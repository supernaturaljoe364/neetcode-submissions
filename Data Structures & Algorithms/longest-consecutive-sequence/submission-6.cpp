class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //first insert elements into unordered_set
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());

        int longest = 1;
        int streak = 1;

        for(int i = 0; i < nums.size() - 1 ; i++){
            if(nums[i+1] == nums[i] + 1 && i < nums.size() - 1){
                streak++;
                longest = max(streak, longest);
            }
            if(nums[i+1] != nums[i]+1){
                if(nums[i+1] == nums[i]){
                    continue;
                }
                else{
                    streak = 1;
                }
            }
        }
        return longest;

    }
};
