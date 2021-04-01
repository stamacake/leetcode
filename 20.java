/*
20. Valid Parentheses
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true

Example 3:

Input: s = "(]"
Output: false
*/
class Solution {
    public boolean isValid(String s) {
        if (s.length() == 1) return false;
        Stack < Character > stack = new Stack < > ();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                stack.push(s.charAt(i));
            } else {
                if (s.charAt(i) == '[') {
                    stack.push(s.charAt(i));
                } else {
                    if (s.charAt(i) == '{') {
                        stack.push(s.charAt(i));
                    } else {
                        if (s.charAt(i) == ')') {
                            if (stack.empty()) return false;
                            if (stack.pop() != '(') return false;
                        } else {
                            if (s.charAt(i) == ']') {
                                if (stack.empty()) return false;
                                if (stack.pop() != '[') return false;
                            } else {
                                if (s.charAt(i) == '}') {
                                    if (stack.empty()) return false;
                                    if (stack.pop() != '{') return false;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (stack.empty()) return true;
        else return false;

    }
}

/*
Runtime: 1 ms, faster than 98.45% of Java online submissions for Valid Parentheses.
Memory Usage: 37 MB, less than 68.54% of Java online submissions for Valid Parentheses.
*/
