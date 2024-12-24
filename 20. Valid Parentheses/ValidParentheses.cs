public class Solution {
    public bool IsValid(string s) {
    
    Stack<char> stack = new Stack<char>();

        foreach(char c in s){
            if (c == '(' || c == '[' || c == '{') {
            stack.Push(c);
            } else {
                if (!stack.Any()) {
                    return false;
                }

                if ((c == ')' && stack.Peek() == '(') ||
                    (c == ']' && stack.Peek() == '[') ||
                    (c == '}' && stack.Peek() == '{')) {
                    stack.Pop();
                }else{
                    return false;
                }
            }
        }
        return !stack.Any();
    }
}