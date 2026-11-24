class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //O(n) time O(1) space
        int j = 0;
        int num1 = numbers[j];
        for(int i = 1; i < numbers.size(); i++){
            if(numbers[i] + num1 == target){
                return {j+1, i+1};
            }
            else{
                j = i;
            }
        }

        return {};
    }
};
