/*
LeetCode #27 – Remove Element
Goal:
Remove all occurrences of val in array in-place.

Logic:
- Use a pointer to keep track of next position to fill
- Traverse array
- If element != val → copy to next position
- Return new length

Time Complexity: O(n)
Space Complexity: O(1)

Pattern:
- Array traversal
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // next position
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};