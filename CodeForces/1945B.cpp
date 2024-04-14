#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int64_t t; // amount of test cases

    cin >> t;
    vector<int64_t> answers;

    for(int64_t i = 0; i < t; ++i){
        int64_t a, b, m;
        cin >> a >> b >> m;

        int64_t ans;
        ans = m / a + m / b + 2;
        answers.push_back(ans);
    }

    for(auto x : answers){
        cout << x << endl;
    }
}

// answer this question:
// What is the maximum number of fireworks that could be seen in the sky at the same time?


// a is after how many minutes 1st installation launches firework
// b is after how many minutes 2nd installation launches firework

// firework in the sky is visible for m + 1 minutes after launch