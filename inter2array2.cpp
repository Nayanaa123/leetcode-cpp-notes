/*
=========================================
Intersection of Two Arrays II (LeetCode 350)
=========================================

Problem:
Given two integer arrays nums1 and nums2,
return an array of their intersection.
- Each element in the output appears as many times
  as it shows in both arrays.
- Order does not matter.

Example:
nums1 = [1,2,2,1], nums2 = [2,2]
Output = [2,2]

nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output = [4,9] or [9,4]

-----------------------------------------
Efficient Logic (Using Hash Map)
-----------------------------------------
1. Use an unordered_map to count frequency of elements in nums1
2. Traverse nums2:
   - If the element exists in the map and count > 0:
       → add to result
       → decrease count by 1
3. Return result vector

-----------------------------------------
Step-by-Step Example
-----------------------------------------
nums1 = [1,2,2,1]
nums2 = [2,2]

Step 1: count map for nums1 → {1:2, 2:2}
Step 2: check nums2 elements
   x=2 → count=2 → add to result → result=[2] → count=1
   x=2 → count=1 → add to result → result=[2,2] → count=0
Final result → [2,2]

-----------------------------------------
Time Complexity: O(n + m)
Space Complexity: O(min(n, m))
n = nums1.size(), m = nums2.size()
-----------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int, int> freq; // Step 1: frequency map

    // Count frequencies in nums1
    for (int x : nums1) {
        freq[x]++;
    }

    vector<int> result;

    // Traverse nums2 and check frequency map
    for (int x : nums2) {
        if (freq[x] > 0) {
            result.push_back(x); // add to result
            freq[x]--;           // decrease count
        }
    }

    return result; // final intersection
}

int main() {
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};

    vector<int> ans = intersect(nums1, nums2);

    cout << "Intersection II: ";
    for (int x : ans)
        cout << x << " ";

    return 0;
}