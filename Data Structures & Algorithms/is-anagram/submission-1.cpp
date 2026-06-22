class Solution {
public:
    bool isAnagram(string s, string t) {
        //sort?
        std::unordered_map<int, int> hashMap;
        for(int i = 0; i < s.size(); ++i){
            hashMap[s[i]]++;
        }

        for(int i = 0; i < t.size(); ++i){
            auto it = hashMap.find(t[i]);
            if(it != hashMap.end()){
                hashMap[t[i]]--;
            }
            else return false;
        }


        for(auto pair : hashMap){
            if(pair.second != 0)
                return false;
        }

        return true;
    }
};
