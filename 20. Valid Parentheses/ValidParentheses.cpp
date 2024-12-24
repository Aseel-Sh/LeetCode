class Solution {
public:
    bool isValid(string s) {
        stack<char> chars;
        for (char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                chars.push(ch);
            }else{
                if(chars.empty() ||
                    ch == ')' && chars.top() != '(' ||
                    ch == ']' && chars.top() != '[' ||
                    ch == '}' && chars.top() != '{'
                ){
                    return false;
                }
                chars.pop();
            }
        }
        return chars.empty();
    }
};