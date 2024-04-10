#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
   public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, result = nums[0];

        while (l <= r) {
            if (nums[l] < nums[r]) {
                result = min(result, nums[l]);
                break;
            }

            int mid = l + (r - l) / 2;
            result = min(result, nums[mid]);

            if (nums[l] <= nums[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }

        return result;
    }
};

int main() {
    Solution* s = new Solution();

    int size;
    cin >> size;

    vector<int> inputs;

    for (int i = 0; i < size; i++) {
        int j;
        cin >> j;
        inputs.push_back(j);
    }

    auto res = s->findMin(inputs);

    cout << endl
         << res << endl;

    return 0;
}
