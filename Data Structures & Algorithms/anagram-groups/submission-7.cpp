class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<string>> ans;

        for(const auto& str : strs){
            std::array<int, 26> count = {0};

            for(const auto& ch : str){
                //for each character, increment its occurence in count
                count[ch - 'a']++;
            }

            string key;
            for(const auto& val: count){
                key += std::to_string(val) + "$";
            }
            ans[key].push_back(str);
        }

        std::vector<std::vector<std::string>> resultVec;
        for(const auto& pair : ans){
            resultVec.push_back(pair.second);
        }

        return resultVec;
    }
};
