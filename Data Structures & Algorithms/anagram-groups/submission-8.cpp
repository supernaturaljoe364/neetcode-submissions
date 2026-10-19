class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> matchingStrings;

        for(const auto& str : strs){
            std::array<int, 26> count = {0};

            for(const auto& ch : str){
                count[ch - 'a']++;
            }

            std::string key;
            for(const auto& val : count){
                key += std::to_string(val) + "$";
            }
            matchingStrings[key].push_back(str);
        }

        std::vector<std::vector<std::string>> resultVec;
        for(const auto& pair : matchingStrings){
            resultVec.push_back(pair.second);
        }

        return resultVec;
    }
};
