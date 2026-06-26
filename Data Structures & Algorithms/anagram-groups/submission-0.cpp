class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::unordered_map<string, vector<string>> ans;
        //step 1: create an array of chars
        for(auto str : strs){
            std::array<char, 26> count = {0};


        //step 2: add number of characters of this string in the count array
            for(auto ch : str){
                count[ch - 'a']++;
            }
        
        //step 3: convert number sequence to string 
            std::string key;
            for(int num : count)
                key += std::to_string(num) + "#";
            
            ans[key].push_back(str);
        }

        vector<vector<string>> result;
        for(auto& entry : ans){
            result.push_back(entry.second);
        }


        return result;
    }
};
