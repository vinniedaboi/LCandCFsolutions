Given a string  `s`, find the length of the  **longest**

**substring**

without repeating characters.

**Example 1:**

**Input:** s = "abcabcbb"
**Output:** 3
**Explanation:** The answer is "abc", with the length of 3.

**Example 2:**

**Input:** s = "bbbbb"
**Output:** 1
**Explanation:** The answer is "b", with the length of 1.

**Example 3:**

**Input:** s = "pwwkew"
**Output:** 3
**Explanation:** The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

**A substring is a contiguous non-empty sequence of characters within a string.**


*Basically the task of this question is to find the longest sub string without any repeating characters*

*Problem right now, is that the search stops after reaching a duplicated character*

# Solution

Step 1 - If the character is already in the map and its index is within the current window

Step 2 - Move the start to one position after the duplicate character's last occurrence

Step 3 - Update the map with the current character's position

Step 4 - Check if the current substring is longer than the best answer so far

Step 5 - Update the answer
