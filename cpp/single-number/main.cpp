#include "../template.hpp"
/*
Given a non-empty array of integers nums, every element appears twice except for
one. Find that single one.

You must implement a solution with a linear runtime complexity and use only
constant extra space.

^: exclusive or
*/
int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (auto i : nums) {
        ans ^= i;
    }
    return ans;
}

int main() {
    vector<int> v{2, 2, 4, 4, 5};
    cout << singleNumber(v);
}