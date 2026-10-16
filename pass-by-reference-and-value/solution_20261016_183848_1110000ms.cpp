class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // Add 1 to a (changes local copy since passed by value)
        a += 1; 

        // Add 2 to b (changes original variable since passed by reference)
        b += 2; 

        // Return the resulting values as a vector
        return {a, b}; 
    }
};