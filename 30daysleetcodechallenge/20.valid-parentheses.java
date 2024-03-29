/*
 * @lc app=leetcode id=20 lang=java
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<Character>();
        
        
        for (int i = 0; i < s.length(); i ++) {
            char ele = s.charAt(i);
            
            if (s.charAt(i) == '(' || s.charAt(i) == '[' || s.charAt(i) == '{') {
                stack.push(ele);
            }
            else{
            if (stack.isEmpty())
            return false;
            if (ele == ')' && stack.peek() == '(') 
               stack.pop();
           else if (ele == '}' && stack.peek() == '{') 
                stack.pop();
          else if (ele == ']' && stack.peek() == '[') 
                stack.pop();
          else 
              break;
        }}
        
return stack.isEmpty();
    }
}
// @lc code=end

