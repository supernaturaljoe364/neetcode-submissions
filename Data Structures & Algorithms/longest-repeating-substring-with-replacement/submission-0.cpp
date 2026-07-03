class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_set<char> charSet(s.begin(), s.end());
        int res = 0;
        
        for(auto ch : charSet){
            int count = 0;
            int l = 0, r=0;

            while(r < s.length()){
                if(s[r] == ch){
                    count++;
                }
                while((r - l + 1) - count > k){
                    if(s[l] == ch)
                        count--;
                    l++;
                }

                res = max(res, (r-l)+1);
                r++;
            }
        }

        return res;
    }
};
