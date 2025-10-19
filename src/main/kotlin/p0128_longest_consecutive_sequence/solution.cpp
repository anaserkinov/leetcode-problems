#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for (int n : nums) {
            set.insert(n);
        }

        int result = 0;
        for (int n : nums) {
            if (!set.count(n - 1)) {
                int l = 1;
                while (set.count(++n)) {
                    l++;
                }
                if (l > result)
                    result = l;
            }
        }

        return result;
    }
};

int main() {
    Solution* s = new Solution();

    int count;
    cin >> count;

    vector<int> vec;

    for (size_t i = 0; i < count; i++) {
        int l;
        cin >> l;
        vec.push_back(l);
    }

    auto res = s->longestConsecutive(vec);

    cout << endl
         << res << endl;

    return 0;
}
