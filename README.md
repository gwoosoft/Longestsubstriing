# Longestsubstriing


>For LEETCODE QUESTION 3  [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)


Optimal solution to solve this problem is using window sliding techniques. 
1. you can delete the front char while looping 
2. To further optimize you can actually save index num of right pointer and skipped the approach above.


| Example | Input | Output| Explanation |
| --- |  --- | --- |  --- |
| Example 1 | s = "abcabcbb" | 3  | The answer is "abc", with the length of 3. |
| Example 2 | s = "bbbbb" | 1  | The answer is "b", with the length of 1. |
| Example 3 | s = "pwwkew" | 3 |  The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring. |
