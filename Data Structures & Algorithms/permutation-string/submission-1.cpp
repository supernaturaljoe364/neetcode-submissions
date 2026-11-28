class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> hashMap;
        if(s1.length() > s2.length()) return false;

        for(const auto& ch : s1){
            hashMap[ch]++;
        }

        int l = 0;
        int r = 0;
        for(;r < s2.length();){
            //expand window eleemnt exists in hashMap;
            //shrink window if element does not exist.

            if(hashMap.find(s2[r]) != hashMap.end()){
                l = r;
                hashMap[s2[r]]--;
                r++;
                while(hashMap.find(s2[r]) != hashMap.end()){
                    hashMap[s2[r]]--;
                    r++;
                }
                if(hashMap.find(s2[r]) == hashMap.end()){
                    if((r - l) < hashMap.size()){
                        return false;
                    }
                }
            }
            r++;
        }

        for(const auto& pair: hashMap){
            cout << pair.first << ":" << pair.second << '\n';
        }

        for(const auto& pair : hashMap){
            if(pair.second != 0){
                return false;
            }
        }

        return true;
    }
};
