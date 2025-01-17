#include <math.h>
#include <memory.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int sum = 0;
        int size = derived.size();
        for (size_t i = 0; i < size; i++){
            sum = sum ^ derived[i];
        }
        return sum == 0;
    }
};

int main() {
    Solution* s = new Solution();

    int size;
    cin >> size;

    vector<int> nums;

    for (int i = 0; i < size; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    bool res = s->doesValidArrayExist(nums);

    return 0;
}