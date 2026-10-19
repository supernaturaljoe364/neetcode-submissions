class Solution {
public:

    string encode(vector<string>& strs) {
       //step 1: find the sizes of each of the strings
       std::vector<int> sizes;
       std::string encoded;

       for(const auto& str : strs){
          int size = str.length();
          encoded += std::to_string(size) + ",";
       }
       encoded += "#";

       for(const auto& str : strs){
          encoded += str;
       }

       return encoded;
    }
    //for["Hello","World"], res = 5,5,#HelloWorld
    vector<string> decode(string s) {
       std::vector<int> sizes;
       std::vector<std::string> strings;
       int i =0;
       while(s[i] != '#'){
        int j = i;
        while(s[j] != ','){
            j++;
        }

        sizes.push_back(std::stoi(s.substr(i, j-i)));
        i = j+1;
       }
       i++;

       for(const auto& size : sizes){
        strings.push_back(s.substr(i, size));
        i+= size;
       }

       return strings;
    }
};



