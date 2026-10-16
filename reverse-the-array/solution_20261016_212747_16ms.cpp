#include <vector>
#include <algorithm>

void reverseArray(std::vector<int> &arr, int m) {
    // Reverse the elements from index m + 1 to the end of the array
    std::reverse(arr.begin() + m + 1, arr.end());
}