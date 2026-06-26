class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(char& ch : s){
            if(std::isalpha(ch) || std::isdigit(ch)){
                temp += std::tolower(static_cast<unsigned char>(ch));
            }
        }


        cout << temp << '\n';
        int n = temp.length();
        for(int i = n-1; i >= 0; --i){
            if(temp[i] != temp[n-i-1]){
                return false;
            }
        }

        return true;
    }
};
