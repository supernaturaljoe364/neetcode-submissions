#include <unordered_map>
#include <vector>
class Solution {
public:
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> three_sum_list;
        for(int i = 0; i < nums.size(); i++){
            //if(nums[i]>0) break;
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int j = i+1, k = nums.size() - 1;

            while(j < k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum > 0){
                    //move k to the left;
                    k--;
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    three_sum_list.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;

                    while( j < k && nums[j] == nums[j-1]){
                        j++;
                    }
                }
            }
        }

        return three_sum_list;
    }
};