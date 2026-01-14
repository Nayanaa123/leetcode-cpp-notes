/*
====================================
PROBLEM: Maximum Subarray
LEETCODE: 53
====================================

👉 Given an integer array nums
👉 Find the contiguous subarray with the maximum sum

Example:
nums = [-2,1,-3,4,-1,2,1,-5,4]
Answer = 6   -> subarray [4,-1,2,1]

------------------------------------
LOGIC (VERY IMPORTANT FOR BEGINNERS)
------------------------------------
At each index, ask ONE question:

"Should I start fresh from this number
OR
continue adding previous sum?"

If previous sum is NEGATIVE → throw it
If previous sum is POSITIVE → keep it
*/

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int currentSum = nums[0];   // sum till current index
    int maxSum = nums[0];       // best answer so far

    for (int i = 1; i < nums.size(); i++) {

        // either take current element alone
        // or add it to previous subarray
        currentSum = max(nums[i], currentSum + nums[i]);

        // update the maximum sum
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

/*
TIME COMPLEXITY: O(n)
SPACE COMPLEXITY: O(1)

INTERVIEW KEY LINE:
currentSum = max(nums[i], currentSum + nums[i]);
*/