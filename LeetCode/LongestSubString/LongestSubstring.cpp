#include <iostream>
#include <unordered_map>


int main()
{

    std::string s;
    std::cout << "s = ";
    std::cin >> s;

    std::string answer;
    std::unordered_map<char, int> alphabets;

    int start = 0;

    for (int j = 0; j < s.length(); ++j)
    {
        // If the character is already in the map and its index is within the current window
        if (alphabets.find(s[j]) != alphabets.end() && alphabets[s[j]] >= start)
        {
            // Move the start to one position after the duplicate character's last occurrence
            start = alphabets[s[j]] + 1;
        }

        // Update the map with the current character's position
        alphabets[s[j]] = j;

        // Check if the current substring is longer than the best answer so far
        if (j - start + 1 > answer.length())
        {
            answer = s.substr(start, j - start + 1);  // Update the answer
        }
    }

    std::cout << answer.length() << std::endl;
}