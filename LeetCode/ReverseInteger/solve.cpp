#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

class Solution {
public:
    int reverse(int x) {
        // Handle if the input is 0
        if (x == 0) {
            return 0;
        }

        // Get the absolute value of x and store the sign
        bool isNegative = x < 0;
        string convert = to_string(abs(x));
        string reversed(convert.rbegin(), convert.rend());

        // Convert the reversed string back to an integer
        try {
            long long answer = stoll(reversed); // Use stoll for larger ranges

            // Check for 32-bit integer overflow
            if (answer > numeric_limits<int>::max()) {
                return 0; // Return 0 on overflow as per problem constraints
            }

            return isNegative ? -answer : answer;
        } catch (const invalid_argument& e) {
            // If stoi throws an exception, return 0 (this shouldn't usually happen if input is valid)
            return 0;
        } catch (const out_of_range& e) {
            // Handle out-of-range exceptions caused by overflow
            return 0;
        }
    }
};


int main(){
    int input;
    cin >> input;

    Solution solve;

    cout << solve.reverse(input) << endl;
}