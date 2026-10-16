class Solution {
public:
    int maxValue(int n) {
        int consecutive_ones = 0;

        // 10^9 is less than 2^30, so starting from bit 30 is sufficient
        for (int i = 30; i >= 0; --i) {
            // Check if the i-th bit is set
            if ((n & (1LL << i)) != 0) {
                consecutive_ones++;

                // If we found three consecutive 1s
                if (consecutive_ones == 3) {
                    // Turn off the current bit to maximize the remaining number
                    n &= ~(1LL << i);

                    // Reset the consecutive ones counter since this bit is now 0
                    consecutive_ones = 0;
                }
            } else {
                // Reset if the bit is already 0
                consecutive_ones = 0;
            }
        }

        return n;
    }
};