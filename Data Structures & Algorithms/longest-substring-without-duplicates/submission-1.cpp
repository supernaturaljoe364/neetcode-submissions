class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //step 1: create a hashMap
        std::unordered_map<char, int> hashMap;
        int n = s.length();
        int left = 0;
        int right = 0;

        int maxLen = 0;

        while(left <= right && (left != n) && (right != n)){
            auto it = hashMap.find(s[right]);
            if(it == hashMap.end()){
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
            maxLen = max(maxLen, temp);
            right++;
        }

        return maxLen;
    }
};
