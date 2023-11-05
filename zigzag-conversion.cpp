#include <memory.h>

#include <iostream>
#include <string>

using namespace std;

class Solution {
   public:
    string convert(string s, int numRows) {
        if (numRows == 1){
            return s;
        }
        string res = "";
        
        size_t subColumnCount = numRows - 1;
        size_t columnSize = (numRows << 1) - 2;
        size_t columnCount = s.length() / columnSize + 1;

        for (size_t row = 0; row < numRows; row++) {
            for (size_t i = 0; i < columnCount * subColumnCount; i++) {
                size_t column = i / subColumnCount;
                size_t subColumn = i - column * subColumnCount;

                int t = -1;
                if (subColumn == 0)
                    t = column * columnSize + row;
                else if (numRows - subColumn == row + 1)
                    t = column * columnSize + numRows + subColumn - 1;

                if (t >= 0 && t < s.length())
                    res += s[t];
            }
        }

        return res;
    }
};

int main() {
    Solution* s = new Solution();

    string st;
    cin >> st;

    int rows;
    cin >> rows;

    cout << s->convert(st, rows) << endl;

    return 0;
}