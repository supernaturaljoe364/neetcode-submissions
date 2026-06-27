class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left = 0;
        int right = 0;
        int maxLen = 0;

        std::unordered_map<char, int> hashMap;

        //step 1: loop thorugh each element
        while(left <= right && (left != n) && (right != n)){
            auto it = hashMap.find(s[right]);
            if(it == hashMap.end()){
                //not found!
                hashMap[s[right]] = 1;
            }
            else{
                hashMap[s[right]]++;
                while(left < right && hashMap[s[right]] != 1){
                    hashMap[s[left]]--;
                    left++;
                }
            }
            int temp = right - left + 1;
            if(temp >= maxLen) maxLen = temp;
            right++;
        }

        return maxLen;
    }
};
