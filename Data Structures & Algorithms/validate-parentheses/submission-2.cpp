class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> stackMap = {{')', '('} , {'}', '{'}, {']', '['}};
        stack<char> myStack;
        for(auto c : s){
            auto it = stackMap.find(c);
            if(it == stackMap.end()){
                myStack.push(c);
            }
            else{
                //closing braacket found for respective open brakcet.
                if(!myStack.empty() && myStack.top() == stackMap[c])
                    myStack.pop();
                else  return false;
            }
        }

        return myStack.empty();
    }
};
