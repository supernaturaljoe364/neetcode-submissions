class Solution {
public:

    string encode(vector<string>& strs) {
       //step 1: find the sizes of each of the strings
        vector<int> sizes;
        string res;

        for(const auto& str : strs){
            int size = str.length();
            sizes.push_back(size);
            res += to_string(size) + ",";    
        }
        res.push_back('#');
        for(const auto& str : strs){
            res+=str;
        }

        return res;
    }
    //for["Hello","World"], res = 5,5,#HelloWorld
    vector<string> decode(string s) {
        vector<int> sizes;
        vector<string> res;

        int i = 0;          //i for the numbers extraction before #
        while(s[i] != '#'){
            int j = i;          //j for the number extraction before commas
            while(s[j] != ','){
                j++;
            }

            sizes.push_back(std::stoi(s.substr(i, j-i)));
            i = j+1;
        }
        i++;
        //sizes extracted. now for every letter
        for(int size : sizes){
            res.push_back(s.substr(i, size));
            i+=size;
        }

        return res;
    }
};
