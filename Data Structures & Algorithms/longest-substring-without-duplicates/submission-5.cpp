class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> chars;
        
        int streak = 0;
        int maxStreak = 0;
        for(const auto& ch : s){
            auto it = chars.find(ch);
            if(it != chars.end()){
                streak = 1;
            }
            else{
                chars.emplace(ch);
                streak++;
            }
            maxStreak = max(maxStreak, streak);
        }

        return maxStreak;
    }
};
