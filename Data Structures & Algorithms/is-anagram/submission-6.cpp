class Solution {
public:
    bool isAnagram(string s, string t) {
       std::unordered_map <char, int> hashMap;

       for(auto c : s){
        hashMap[c]++;
       }

       for(auto c : t){
        auto it = hashMap.find(c);

        if(it != hashMap.end()){
            hashMap[c]--;
        }
        else return false;
       }

       for(auto pair : hashMap){
        if(pair.second != 0) return false;
       }

       return true;
    }
};
