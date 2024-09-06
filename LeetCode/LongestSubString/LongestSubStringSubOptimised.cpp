#include <iostream>
#include <map>
#include <string>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {

        std::string answer;

        for (int j = 0; j < s.length(); ++j) {
            std::map<char, int> alphabets;
            std::string temp;
            for (int i = 0; i < s.length(); ++i) {
                alphabets[s[i]] = 0;
            }
            for (int i = j; i < s.length(); ++i) {
                ++alphabets[s[i]];
                if (alphabets[s[i]] > 1) {
                    break;
                } else {
                    temp += s[i];
                }
            }
            if (temp.length() > answer.length()) {
                answer = temp;
            }
        }
        return answer.length();
    }
};