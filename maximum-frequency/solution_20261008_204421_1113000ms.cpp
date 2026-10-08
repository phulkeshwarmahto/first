#include <vector>
#include <algorithm>

class Solution {
public:
    int maxFrequency(std::vector<int>& arr, int k) {
        // Sort the array to group similar elements together
        std::sort(arr.begin(), arr.end());

        long long sum = 0;
        int left = 0;
        int max_freq = 0;

        for (int right = 0; right < arr.size(); ++right) {
            sum += arr[right];

            // If the total operations needed to make all elements in the window 
            // equal to arr[right] exceeds k, shrink the window from the left
            while ((long long)(right - left + 1) * arr[right] - sum > k) {
                sum -= arr[left];
                left++;
            }

            // Update the maximum frequency found so far
            max_freq = std::max(max_freq, right - left + 1);
        }

        return max_freq;
    }
};