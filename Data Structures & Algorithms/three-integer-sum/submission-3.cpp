#include <unordered_map>
#include <vector>
class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> three_sum_list;
        /*
        given two pointer and sorted, 
        place i at front, k at the back, 
        j in the middle?

        if nums[i]+nums[j]+nums[k] > 0, 
        then we move k to the left. (k--)

        if(sum < 0) then move i to the right
        (i++)

        */
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int j = i + 1, k = nums.size() + 1;
            while(j < k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum < 0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    three_sum_list.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j < k && nums[l] == nums[l-1]){
                        l++;
                    }
                }
            }
        }

        return three_sum_list;
    }
};