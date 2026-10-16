class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> first_idx(26, -1);
        
        for (int i = 0; i < s.length(); i++) {
            int char_idx = s[i] - 'a';
            
            // If seeing the character for the first time, record its index
            if (first_idx[char_idx] == -1) {
                first_idx[char_idx] = i;
            } 
            // If it's the second occurrence, calculate the gap and compare
            else {
                int actual_dist = i - first_idx[char_idx] - 1;
                if (actual_dist != distance[char_idx]) {
                    return false;
                }
            }
        }
        
        return true;
    }
};