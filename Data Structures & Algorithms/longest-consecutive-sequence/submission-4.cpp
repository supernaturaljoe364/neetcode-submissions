class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //first insert elements into unordered_set
        if(nums.empty()) return 0;
        unordered_set<int> numSet(nums.begin(), nums.end());

        int longest = 1;
        int length;
        for(auto num : numSet){
            if(numSet.find(num-1) == numSet.end()){
                length = 1;
            }
            while(numSet.find(num+length) != numSet.end()){
                length++;
            }
            longest = max (longest, length);
        }

        return longest;
    }
};
