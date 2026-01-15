/*
=========================================
Intersection of Two Arrays (Efficient)
=========================================

Problem:
Given two integer arrays nums1 and nums2,
return all elements that appear in both arrays.
- Each element must appear only once
- Order does not matter

Example:
nums1 = [4, 9, 5]
nums2 = [9, 4, 9, 8, 4]
Output = [4, 9]  (or [9,4])

-----------------------------------------
Efficient Logic (Using Hash Set)
-----------------------------------------
1. Store all elements of nums1 in a set → ensures uniqueness + fast lookup
2. Traverse nums2:
   - If element exists in set → add to result set
   - Result set automatically avoids duplicates
3. Convert result set to vector → final answer

-----------------------------------------
Step-by-Step Example
-----------------------------------------
nums1 = [4, 9, 5] → set1 = {4,9,5}
nums2 = [9, 4, 9, 8, 4]

Check nums2:
- 9 → in set1 → add to result → result={9}
- 4 → in set1 → add to result → result={9,4}
- 9 → already in result → skip
- 8 → not in set1 → skip
- 4 → already in result → skip

Final result → [9,4] (or [4,9])

-----------------------------------------
Time Complexity: O(n + m)
Space Complexity: O(n)
n = nums1.size(), m = nums2.size()
-----------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s(nums1.begin(), nums1.end()); // Step 1: store nums1 in set
    unordered_set<int> result;                        // Step 2: store intersection

    for (int x : nums2) {                             // Step 3: check nums2 elements
        if (s.count(x)) {
            result.insert(x);                         // insert automatically avoids duplicates
        }
    }

    return vector<int>(result.begin(), result.end()); // Step 4: convert set to vector
}

int main() {
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    vector<int> ans = intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int x : ans)
        cout << x << " ";

    return 0;
}