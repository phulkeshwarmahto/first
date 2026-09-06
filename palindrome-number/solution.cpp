#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        // Base cases: negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            // Pull the last digit from x and add it to the reversed half
            reversedHalf = (reversedHalf * 10) + (x % 10);
            // Remove the last digit from x
            x /= 10;
        }

        // For even-length numbers: x == reversedHalf (e.g., 1221 -> x=12, reversedHalf=12)
        // For odd-length numbers: x == reversedHalf / 10 to ignore the middle digit (e.g., 121 -> x=1, reversedHalf=12)
        return x == reversedHalf || x == reversedHalf / 10;
    }
};