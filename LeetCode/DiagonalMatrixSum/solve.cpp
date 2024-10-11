#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int sum = 0;
        for (int i = 0; i < mat.size(); ++i)
        {
            for (int j = 0; j < mat[i].size(); ++j)
            {
                if (i == j || i + j == mat.size() - 1)
                {
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};

int main()
{
    Solution solution;
    vector<vector<int>> arr;

    int numRows, numCols, element;

    cout << "Enter number of rows: ";
    cin >> numRows;
    cout << "Enter number of columns: ";
    cin >> numCols;
    for (int i = 0; i < numRows; i++)
    {
        vector<int> row;

        cout << "Enter " << numCols << " elements for row " << i + 1 << ":\n";
        for (int j = 0; j < numCols; j++)
        {
            cin >> element;
            row.push_back(element); // Add element to the row
        }

        arr.push_back(row);
    }

    cout << "The 2D array is: \n";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    solution.diagonalSum(arr);
}