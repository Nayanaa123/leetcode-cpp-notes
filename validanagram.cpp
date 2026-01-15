/*
====================================
Valid Anagram
====================================

Problem:
Given two strings s and t, check whether t is an anagram of s.

Anagram Definition:
Two strings are anagrams if they contain
• same characters
• same frequency
• order does NOT matter

Example:
s = "anagram", t = "nagaram"  → true
s = "rat", t = "car"          → false

------------------------------------
Easy Method (Sorting)
------------------------------------
Logic:
1. If lengths are different → not anagram
2. Sort both strings
3. Compare sorted strings
4. If equal → valid anagram

------------------------------------
Algorithm
------------------------------------
• If s.length != t.length → return false
• sort(s)
• sort(t)
• return (s == t)

------------------------------------
Time Complexity: O(n log n)
Space Complexity: O(1)
------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    // Step 1: Check length
    if (s.length() != t.length())
        return false;

    // Step 2: Sort both strings
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    // Step 3: Compare
    return s == t;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    if (isAnagram(s, t))
        cout << "Valid Anagram";
    else
        cout << "Not an Anagram";

    return 0;
}