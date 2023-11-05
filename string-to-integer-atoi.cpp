#include <memory.h>

#include <iostream>
#include <string>

using namespace std;

class Solution {
   public:
    int myAtoi(string s) {
        size_t length = s.length();
        if (length == 0)
            return 0;
        int result = 0;
        int8_t sign = 0;
        int max = -INT32_MAX;

        for (size_t i = 0; i < length; i++) {
            int8_t c = s[i];
            if (c >= 48 && c <= 57) {
                int8_t numberToAdd = c - 48;
                int k = max + numberToAdd;
                if (sign == 0)
                    sign = 1;
                if (k / 10 > -result || k / 10 + k % 10 > -result)
                    return sign == 1 ? INT32_MAX : INT32_MIN;
                result = result * 10 + numberToAdd;
            } else if (sign != 0)
                return result * sign;
            else if (c == 45)
                sign = -1;
            else if (c == 43)
                sign = 1;
            else if (c != 32 && result == 0)
                return 0;
        }

        return result * sign;
    }
};

int main() {
    Solution* s = new Solution();

    string st;
    cin >> st;

    cout << s->myAtoi(st) << endl;

    return 0;
}
