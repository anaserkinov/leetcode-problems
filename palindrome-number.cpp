#include <memory.h>

#include <iostream>
#include <string>

using namespace std;

class Solution {
   public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int result;
        int input = x;
        int max = INT32_MAX;;

        while (input != 0) {
            int8_t numberToAdd = input % 10;
            int k = max - numberToAdd;
            if (max / 10 < result || k / 10 - k % 10 < result)
                return 0;

            result *= 10;
            result += numberToAdd;
            input /= 10;
        }

        return result == x;
    }
};

int main() {
    Solution* s = new Solution();

    int input;
    cin >> input;

    cout << s->isPalindrome(input) << endl;

    return 0;
}
