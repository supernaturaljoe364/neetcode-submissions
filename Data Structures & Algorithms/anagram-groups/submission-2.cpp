class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> ans;

        for(const auto& str : strs){
            std::array<int, 26> count = {0};


            for(auto ch : str){
                count[ch - 'a']++;
            }

            std::string key;
            for(auto num : count){
                key += std::to_string(num) + "#";
            }
            ans[key].push_back(str);
        }

        std::vector<std::vector<std::string>> result;
        for(auto& str : ans){
            result.emplace_back(str.second);
        }

        return result;

    }
};
