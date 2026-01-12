/*
LeetCode #88 – Merge Sorted Array

Problem:
You are given two sorted arrays nums1 and nums2.
nums1 has enough space at the end to hold nums2.
Merge nums2 into nums1 in sorted order.

Example:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6], n = 3

Output:
[1,2,2,3,5,6]

Beginner Logic:
- Start comparing elements from the END
- This avoids overwriting elements in nums1
- Use three pointers:
  i → last element of nums1
  j → last element of nums2
  k → last index of nums1

Time Complexity:
O(m + n)

Space Complexity:
O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;        // pointer for nums1
        int j = n - 1;        // pointer for nums2
        int k = m + n - 1;    // pointer for merged array

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // copy remaining elements from nums2 (if any)
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};