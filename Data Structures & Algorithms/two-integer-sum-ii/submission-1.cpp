class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //O(n) time O(1) space
        int left = 0;
        int right = numbers.size() - 1;

        //if sum of left + right == target return 
        //if less, then move the right towards the left
        //if more, then move the left towards the right

        while(left < right){
            int sum = numbers[left] + numbers[right];
            if(sum > target){
                right--;
            }
            else if(sum < target){
                //too small, move left
                left++;
            }
            else{
                return {left+1, right+1};
            }
        }

        return {};
    }
};
