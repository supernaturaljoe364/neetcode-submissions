class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> hashMap;

        for(const auto& ch : s)
            hashMap[ch]++;

        for(const auto& ch : t){
            auto it = hashMap.find(ch);
            if(it != hashMap.end()){
                hashMap[ch]--;
            }
            else return false;
        }

        for(auto pair : hashMap){
            if(pair.second != 0){
                return false;
            }
        }

        return true;
    }
};
