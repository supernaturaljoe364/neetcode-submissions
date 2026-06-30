class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //step 1: create a hashMap
        unordered_map<char, int> freqMap;
        int streak = 0;
        int l = 0;
        int r = 0;

        while((l <= r) && r < s.length()){
            freqMap[s[r]]++;
            if(freqMap[s[r]] >= 2){
                while((l < r) && freqMap[s[r]] != 1){
                    freqMap[s[l]]--;
                    l++;
                }
            }
            int temp = r - l + 1;
            streak= max(streak, temp);
            r++;
        }
        return streak;
    }
};
