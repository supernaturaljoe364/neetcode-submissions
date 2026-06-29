class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;

        while(left < right){
            while(left < right && !isalnum(s[left]))
                left++;
            while(right > left && !isalnum(s[right]))
                right--;
            
            //at this point, both left and right point to some alnum
            if(std::tolower(s[left]) != std::tolower(s[right]))
                return false;
            
            left++; right--;
        }

        return true;
    }

    bool isalnum(char ch){
        return (std::isdigit(ch) || std::isalpha(ch));
    }
};

