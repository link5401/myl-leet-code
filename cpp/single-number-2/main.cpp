#include "../template.hpp"
/*
Given an integer array nums where every element appears three times except for
one, which appears exactly once. Find the single element and return it.

You must implement a solution with a linear runtime complexity and use only
constant extra space.
*/
int singleNumber(vector<int>& nums) {
    int x1 = 0, x2 = 0, mask = 0;
         
        for (int i : nums) {
            cout << i << " ";
            x2 ^= x1 & i;
            x1 ^= i;
            cout << bitset<3>(x2) << " " << bitset<3>(x1)<< " ";
            mask = ~(x1 & x2);
            cout << bitset<3>(mask) << " ";
            x2 &= mask;
            x1 &= mask;
            cout << bitset<3>(x2) << " " << bitset<3>(x1) << "\n";
        }

        return x1; 
}

int main() {
    vector<int> v{4, 3, 3, 2, 3, 2, 2};
    cout << singleNumber(v);
}