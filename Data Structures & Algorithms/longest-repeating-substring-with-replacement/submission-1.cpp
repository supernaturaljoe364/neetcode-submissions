class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> freqMap;
        int res = 0;

        int l = 0, maxf = 0, r=  0;
        while(r < s.length()){
            freqMap[s[r]]++;
            maxf = max(maxf, freqMap[s[r]]);

            while((r-l+1) - maxf > k){
                freqMap[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
            r++;
        }
    return res;
    }

};
